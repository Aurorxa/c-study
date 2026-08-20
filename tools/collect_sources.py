"""收集单个模块的 C 源文件，供根目录 meson.build 生成构建目标。

脚本接收项目根目录、模块根目录和 main/test 源集名称，将找到的 .c 文件
按稳定顺序输出为相对项目根目录的 POSIX 路径，每行一个。
"""

import sys
from pathlib import Path


def main() -> None:
    if len(sys.argv) not in (3, 4):
        print(
            "Usage: collect_sources.py <project-root> <module-root> [main|test]",
            file=sys.stderr,
        )
        sys.exit(1)

    project_root = Path(sys.argv[1]).resolve()
    module_root = Path(sys.argv[2]).resolve()
    source_set = sys.argv[3] if len(sys.argv) == 4 else "main"

    if source_set not in ("main", "test"):
        print("Source set must be 'main' or 'test'", file=sys.stderr)
        sys.exit(1)

    # 模块统一采用 <module>/src/<main|test>/c 目录结构。
    source_dir = module_root / "src" / source_set / "c"

    if not source_dir.is_dir():
        return

    # 递归查找允许模块在 c 目录下继续按功能组织子目录。
    sources = sorted(source_dir.rglob("*.c"))

    for source in sources:
        # Meson 从项目根目录解析这些路径；统一使用 / 以保持跨平台输出稳定。
        print(source.relative_to(project_root).as_posix())


if __name__ == "__main__":
    main()
