from pathlib import Path
import sys


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

    for module_dir in sorted(modules_dir.iterdir()):
        if not module_dir.is_dir():
            continue

        main_file = (
                module_dir
                / "src"
                / "main"
                / "c"
                / "main.c"
        )

        # 只有包含 main.c 才认为这是 executable module
        if main_file.is_file():
            print(module_dir.name)


if __name__ == "__main__":
    main()