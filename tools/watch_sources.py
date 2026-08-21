"""监控 C 源文件结构变化，并自动刷新 Meson 构建规则。

该脚本由 `mise run watch` 启动。它只比较 .c 源文件和模块 meson.build 的
路径集合，不读取文件内容，因此普通代码编辑不会触发配置。
"""

import subprocess
import time
from pathlib import Path

# 所有路径都从脚本位置推导，避免依赖启动命令的当前工作目录。
PROJECT_ROOT = Path(__file__).resolve().parent.parent
MODULES_DIR = PROJECT_ROOT / "modules"
LIBRARIES_DIR = PROJECT_ROOT / "libs"
BUILD_DIR = PROJECT_ROOT / "buildDir"

# 轮询实现不依赖第三方文件监控库，适合这个小型学习项目。
POLL_INTERVAL = 0.5


def get_project_structure() -> frozenset[str]:
    """
    只关心会改变 Meson target/source set 的路径。

    修改已有文件的内容不会触发 reconfigure。新建、删除、重命名 .c，
    或新增、删除模块的 meson.build 时才会。
    """

    return frozenset(
        path.relative_to(PROJECT_ROOT).as_posix()
        for source_root in (MODULES_DIR, LIBRARIES_DIR)
        if source_root.exists()
        for pattern in ("*.c", "meson.build")
        for path in source_root.rglob(pattern)
        if path.is_file()
    )


def reconfigure() -> None:
    """让 Meson 重新扫描由脚本发现的模块和源文件列表。"""

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
    print(f"[Watcher] Watching: {MODULES_DIR}, {LIBRARIES_DIR}")
    print()

    # 保存路径快照，只在集合发生变化时重新配置。
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
