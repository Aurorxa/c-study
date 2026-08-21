"""发现 libs 目录中的静态库模块，供根目录 meson.build 使用。

包含 src/main/c 目录且至少有一个 .c 文件的目录被视为静态库模块。
脚本输出库模块相对于 libs 目录的路径，每行一个。
"""

import sys
from pathlib import Path


def main() -> None:
    if len(sys.argv) != 2:
        print(
            "Usage: discover_libraries.py <libraries-directory>",
            file=sys.stderr,
        )
        sys.exit(1)

    libraries_dir = Path(sys.argv[1]).resolve()

    if not libraries_dir.is_dir():
        return

    library_directories: set[Path] = set()

    for source_dir in libraries_dir.glob("**/src/main/c"):
        if any(source_dir.rglob("*.c")):
            # c 的第 3 个父目录是 <library>：<library>/src/main/c。
            library_directories.add(source_dir.parents[2])

    for library_dir in sorted(library_directories):
        print(library_dir.relative_to(libraries_dir).as_posix())


if __name__ == "__main__":
    main()
