from pathlib import Path
import subprocess
import time


PROJECT_ROOT = Path(__file__).resolve().parent.parent
MODULES_DIR = PROJECT_ROOT / "modules"
BUILD_DIR = PROJECT_ROOT / "buildDir"

POLL_INTERVAL = 0.5


def get_project_structure() -> frozenset[str]:
    """
    只关心会改变 Meson target/source set 的路径。

    修改已有 .c 的内容不会触发 reconfigure。
    新建、删除、重命名 .c 才会。
    """

    if not MODULES_DIR.exists():
        return frozenset()

    return frozenset(
        path.relative_to(PROJECT_ROOT).as_posix()
        for path in MODULES_DIR.rglob("*.c")
        if path.is_file()
    )


def reconfigure() -> None:
    print()
    print("[Meson] Project structure changed, reconfiguring...")

    result = subprocess.run(
        [
            "meson",
            "setup",
            "--reconfigure",
            str(BUILD_DIR),
        ],
        cwd=PROJECT_ROOT,
        check=False,
    )

    if result.returncode == 0:
        print("[Meson] Reconfigure completed.")
    else:
        print(
            f"[Meson] Reconfigure failed: "
            f"{result.returncode}"
        )


def main() -> None:
    print(f"[Watcher] Project: {PROJECT_ROOT}")
    print(f"[Watcher] Watching: {MODULES_DIR}")
    print()

    previous = get_project_structure()

    while True:
        time.sleep(POLL_INTERVAL)

        current = get_project_structure()

        if current == previous:
            continue

        added = current - previous
        removed = previous - current

        for path in sorted(added):
            print(f"[Watcher] + {path}")

        for path in sorted(removed):
            print(f"[Watcher] - {path}")

        reconfigure()

        previous = current


if __name__ == "__main__":
    main()