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

    main_files = modules_dir.glob("**/src/main/c/main.c")

    for main_file in sorted(main_files):
        # main.c 上方三级是模块根目录：<c>/main/src/<module> 。
        module_dir = main_file.parents[3]
        print(module_dir.relative_to(modules_dir).as_posix())


if __name__ == "__main__":
    main()
