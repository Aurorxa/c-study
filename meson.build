project(
        # 项目名称
        'c-study',
        # 项目使用 C 语言
        'c',
        # 项目版本号
        version : '1.0.0',
        default_options : [
                # 启用较严格的编译器警告
                'warning_level=3',
                # 将所有编译器警告视为错误
                'werror=true',
                # 检查可能改变数值或丢失精度的隐式类型转换
                'c_args=-Wconversion',
                # 在运行时检查内存错误和未定义行为
                'b_sanitize=address,undefined',
                # 使用 C23 标准；Meson 中 c2x 是其兼容名称
                'c_std=c2x',
        ],
)

# 自动发现根目录以下的 meson.build。module 为空时加载全部，否则只加载指定练习；
# 公共库始终先于练习模块加载。
python = import('python').find_installation()
submodule_result = run_command(
        python,
        '-c',
        '''
from pathlib import Path
import sys

root = Path(sys.argv[1]).resolve()
selected_module = sys.argv[2].strip().replace('\\\\', '/')

if selected_module:
    module_dir = (root / selected_module).resolve()
    try:
        relative_module = module_dir.relative_to(root)
    except ValueError:
        raise SystemExit(f'module must be inside the project: {selected_module}')

    if relative_module.as_posix() in ('.', 'common'):
        raise SystemExit(f'module must name a practice module: {selected_module}')
    if not (module_dir / 'meson.build').is_file():
        raise SystemExit(f'module has no meson.build: {selected_module}')

    common_build = root / 'common' / 'meson.build'
    if common_build.is_file():
        print('common')
    print(relative_module.as_posix())
    raise SystemExit

build_files = sorted(
    root.rglob('meson.build'),
    key=lambda path, root=root: (path.parent != root / 'common', path.as_posix()),
)
for build_file in build_files:
    if build_file.parent != root:
        print(build_file.parent.relative_to(root).as_posix())
  ''',
        meson.project_source_root(),
        get_option('module'),
        check : true,
).stdout().strip()

if submodule_result != ''
        foreach submodule_dir : submodule_result.split('\n')
                subdir(submodule_dir.strip())
        endforeach
endif
