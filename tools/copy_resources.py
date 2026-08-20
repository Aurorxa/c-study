"""将模块资源同步到构建目录，并生成 Meson custom_target 的完成标记。

每次执行都先替换目标资源目录，避免源码中已删除的资源残留在 buildDir。
即使模块没有资源目录，也会创建空目标目录和 stamp 文件。
"""

import shutil
import sys
from pathlib import Path


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

    # 完整替换比增量覆盖更可靠，可以同步处理已删除和重命名的资源。
    if output_dir.exists():
        shutil.rmtree(output_dir)

    if source_dir.is_dir():
        shutil.copytree(source_dir, output_dir)
    else:
        output_dir.mkdir(parents=True)

    # Meson 通过 stamp 判断 custom_target 已成功完成。
    stamp.parent.mkdir(parents=True, exist_ok=True)
    stamp.touch()


if __name__ == "__main__":
    main()
