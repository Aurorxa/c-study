from pathlib import Path
import shutil
import sys


def main() -> None:
    if len(sys.argv) != 4:
        print(
            "Usage: copy_resources.py <source-directory> <output-directory> <stamp>",
            file=sys.stderr,
        )
        sys.exit(1)

    source_dir = Path(sys.argv[1])
    output_dir = Path(sys.argv[2])
    stamp = Path(sys.argv[3])

    if output_dir.exists():
        shutil.rmtree(output_dir)

    if source_dir.is_dir():
        shutil.copytree(source_dir, output_dir)
    else:
        output_dir.mkdir(parents=True)

    stamp.parent.mkdir(parents=True, exist_ok=True)
    stamp.touch()


if __name__ == "__main__":
    main()
