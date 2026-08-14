project('c-study', 'c',
        version : '1.0.0',
        meson_version : '>=1.2.0',
        default_options : [
            'warning_level=3', # -Wall -Wextra -Wpedantic
            'c_std=c23', # C 语言标准
            'werror=true', # warning 将提升为编译错误
            'b_ndebug=if-release', # Release 模式关闭 assert()
            # 以下参数对于 GCC 编译器无效，只针对 CLANG 编译器有效
            # 开启 AddressSanitizer 和 UndefinedBehaviorSanitizer
            # address 表示内存越界、use-after-free 等，undefined 表示未定义行为检查
            # thread 表示线程安全检查，leak 表示内存泄漏检查，memory 表示未初始化内存读取
            #            'b_sanitize=address,undefined',
            'b_sanitize=address,undefined',
        ],
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
    check : true,
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
        check : true,
    ).stdout().splitlines()

    executable(
        module,
        sources,
        include_directories : include_directories(
            module_root / 'src/main/headers',
            module_root / 'src/main/public',
        ),
    )

endforeach
