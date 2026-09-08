common_scan = run_command(
    python,
    '-c',
    '''
from pathlib import Path
import sys

root = Path(sys.argv[1]).resolve()
for path in sorted((*root.rglob('*.c'), *root.rglob('*.h'))):
    print(path.relative_to(root).as_posix())
  ''',
    meson.current_source_dir(),
    check : true,
).stdout().strip()

common_files = common_scan.split('\n')
common_inc = []
if fs.is_dir(meson.current_source_dir() / 'include')
    common_inc = include_directories('include')
endif
common_lib = static_library(
    'common',
    common_files,
    include_directories : common_inc,
)

# 练习模块通过 dependencies : common_dep 使用公共代码。
common_dep = declare_dependency(
    # 整体链接以保证无须显式调用的运行时初始化入口不会被静态链接器丢弃。
    link_whole : common_lib,
    include_directories : common_inc,
)
