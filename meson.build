project('c-study', 'c',
        version : '1.0.0',
        meson_version: '>=1.2.0',
        default_options : ['warning_level=3', 'c_std=c2x'],
)

# ------------------------------------------------------------
# 公共工具
# ------------------------------------------------------------

python = import('python').find_installation()

project_root = meson.project_source_root()

discover_modules_script = (
    project_root / 'tools/discover_modules.py'
)

collect_sources_script = (
    project_root / 'tools/collect_sources.py'
)

# ------------------------------------------------------------
# 自动发现 modules/*
# ------------------------------------------------------------

modules = run_command(
    python,
    discover_modules_script,
    project_root / 'modules',
    check: true,
).stdout().splitlines()


# ------------------------------------------------------------
# 自动创建每一个模块
# ------------------------------------------------------------

foreach module : modules

    module_root = 'modules' / module

    sources = run_command(
        python,
        collect_sources_script,
        project_root,
        project_root / module_root,
        check: true,
    ).stdout().splitlines()

    executable(
        module,
        sources,
        include_directories: include_directories(
            module_root / 'src/main/headers',
            module_root / 'src/main/public',
        ),
    )

endforeach
