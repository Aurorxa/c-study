"""发现 modules 目录中所有可执行模块，供根目录 meson.build 使用。

包含 src/main/c/main.c 的目录被视为一个模块。脚本输出模块相对于
modules 目录的路径，每行一个；Meson 使用这些路径创建对应的可执行目标。
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

    # main.c 是模块入口，也是判断目录是否为可构建模块的约定。
    main_files = modules_dir.glob("**/src/main/c/main.c")

    for main_file in sorted(main_files):
        # main.c 的第 4 个父目录是 <module>：<module>/src/main/c/main.c。
        module_dir = main_file.parents[3]
        print(module_dir.relative_to(modules_dir).as_posix())


if __name__ == "__main__":
    main()
