"""发现 modules 目录中显式声明的模块，供根目录 meson.build 使用。

包含 meson.build 的目录被视为一个模块。模块应采用 demo 模块展示的
src/main 与 src/test 目录结构，并以 src/main/c/main.c 作为程序入口。
脚本输出模块相对于 modules 目录的路径，每行一个。
"""

import sys
from pathlib import Path


def main() -> None:
    if len(sys.argv) != 2:
        print(
            "Usage: discover_modules.py <modules-directory>",
            file=sys.stderr,
        )
        sys.exit(1)

    modules_dir = Path(sys.argv[1]).resolve()

    if not modules_dir.is_dir():
        return

    # meson.build 是显式模块边界；普通分组目录不会被误判为模块。
    module_build_files = modules_dir.glob("**/meson.build")

    for module_build_file in sorted(module_build_files):
        module_dir = module_build_file.parent
        main_entry = module_dir / "src" / "main" / "c" / "main.c"

        if not main_entry.is_file():
            print(
                f"Module {module_dir} is missing src/main/c/main.c",
                file=sys.stderr,
            )
            sys.exit(1)

        print(module_dir.relative_to(modules_dir).as_posix())


if __name__ == "__main__":
    main()
