from pathlib import Path
import sys


def main() -> None:
    if len(sys.argv) != 3:
        print(
            "Usage: collect_sources.py <project-root> <module-root>",
            file=sys.stderr,
        )
        sys.exit(1)

    project_root = Path(sys.argv[1]).resolve()
    module_root = Path(sys.argv[2]).resolve()

    source_dir = (
            module_root
            / "src"
            / "main"
            / "c"
    )

    if not source_dir.is_dir():
        return

    sources = sorted(
        source_dir.rglob("*.c")
    )

    for source in sources:
        print(
            source.relative_to(project_root).as_posix()
        )


if __name__ == "__main__":
    main()