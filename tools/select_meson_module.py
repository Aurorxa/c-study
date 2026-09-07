#!/usr/bin/env python3
"""Select the Meson module containing the file currently open in the IDE."""

from __future__ import annotations

import argparse
import importlib.util
from pathlib import Path
import shutil
import subprocess
import sys


def find_module(context_path: Path, project_root: Path) -> Path:
    current = context_path if context_path.is_dir() else context_path.parent

    while current != project_root:
        if project_root not in current.parents:
            break
        if (current / "meson.build").is_file():
            return current
        current = current.parent

    raise ValueError(f"no module meson.build found above: {context_path}")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("context_path", help="Current IDE file or directory")
    args = parser.parse_args()

    project_root = Path(__file__).resolve().parent.parent
    context_path = Path(args.context_path).resolve(strict=True)
    module_dir = find_module(context_path, project_root)
    relative_module = module_dir.relative_to(project_root).as_posix()

    if relative_module == "common":
        raise ValueError("common is a shared library, not a runnable module")

    if importlib.util.find_spec("mesonbuild") is not None:
        meson_command = [sys.executable, "-m", "mesonbuild.mesonmain"]
    else:
        meson = shutil.which("meson")
        if meson is None:
            raise RuntimeError("Meson is not installed for this Python and was not found in PATH")
        meson_command = [meson]

    build_dir = project_root / "buildDir"
    command = [*meson_command, "setup", f"-Dmodule={relative_module}"]
    if (build_dir / "meson-private" / "coredata.dat").is_file():
        command.append("--reconfigure")
    command.extend((str(build_dir), str(project_root)))

    subprocess.run(command, check=True)
    print(f"Selected Meson module: {relative_module}")


if __name__ == "__main__":
    main()
