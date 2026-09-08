# 当前目录是一个独立模块，只收集该模块边界内的 C 源文件和头文件。
scan_result = run_command(
    python,
    '-c',
    '''
from pathlib import Path
import re
import sys

root = Path(sys.argv[1]).resolve()
project_root = Path(sys.argv[2]).resolve()
files = sorted((*root.rglob('*.c'), *root.rglob('*.h')))
main_files = [
    path for path in files
    if path.name == 'main.c' and re.search(r'\bmain\s*\(', path.read_text(encoding='utf-8'))
]
if len(main_files) != 1:
    raise SystemExit(f'{root}: expected exactly one main.c defining main(), found {len(main_files)}')
# 使用从项目根目录到当前模块的完整目录路径，避免不同上级目录中的
# 同名模块生成相同的 Meson/CLion 目标名。
relative_module = root.relative_to(project_root)
print(re.sub(r'[^A-Za-z0-9_]', '_', relative_module.as_posix()))
for path in files:
    print(path.relative_to(root).as_posix())
  ''',
    meson.current_source_dir(),
    meson.project_source_root(),
    check : true,
).stdout().strip()

scan_records = scan_result.split('\n')
module_target = scan_records[0]
module_files = []
foreach index : range(scan_records.length())
    if index > 0
        module_files += scan_records[index]
    endif
endforeach
# 模块可以没有 include 目录；存在时才添加头文件搜索路径。
module_inc = []
if fs.is_dir(meson.current_source_dir() / 'include')
    module_inc = include_directories('include')
endif

module = executable(
    module_target,
    module_files,
    include_directories : module_inc,
    dependencies : common_dep,
)
test(module_target, module)
