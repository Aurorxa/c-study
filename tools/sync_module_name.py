"""Synchronize every module's Meson target name with its directory path."""

import re
import sys
from pathlib import Path


MODULE_NAME_PATTERN = re.compile(
    r"(?m)^(?P<prefix>\s*module_name\s*=\s*)"
    r"(?P<quote>['\"])(?P<name>[^'\"]+)(?P=quote)(?P<suffix>\s*)$"
)


def fail(message: str) -> None:
    print(f"Error: {message}", file=sys.stderr)
    raise SystemExit(1)


def main() -> None:
    if len(sys.argv) != 1:
        fail("usage: mise run module:rename")

    project_root = Path(__file__).resolve().parent.parent
    modules_dir = project_root / "modules"
    build_files = sorted(modules_dir.glob("**/meson.build"))
    if not build_files:
        fail(f"no modules found in {modules_dir}")

    pending_updates: list[tuple[Path, str, str, str]] = []
    for build_file in build_files:
        content = build_file.read_text(encoding="utf-8")
        match = MODULE_NAME_PATTERN.search(content)
        if not match:
            fail(f"{build_file} must contain one module_name assignment")

        relative_dir = build_file.parent.relative_to(modules_dir)
        expected_name = ".".join(relative_dir.parts)
        old_name = match.group("name")
        if old_name == expected_name:
            continue

        replacement = (
            f"{match.group('prefix')}{match.group('quote')}"
            f"{expected_name}{match.group('quote')}{match.group('suffix')}"
        )
        updated = content[: match.start()] + replacement + content[match.end() :]
        pending_updates.append((build_file, old_name, expected_name, updated))

    for build_file, old_name, expected_name, updated in pending_updates:
        build_file.write_text(updated, encoding="utf-8", newline="")
        relative_file = build_file.relative_to(project_root)
        print(f"Updated {relative_file}: {old_name} -> {expected_name}")

    print(
        f"Checked {len(build_files)} modules; "
        f"updated {len(pending_updates)} meson.build file(s)."
    )


if __name__ == "__main__":
    main()
