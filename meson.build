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
fs = import('fs')

project_root = meson.project_source_root()

add_project_arguments(
    '-include',
    project_root / 'tools/c_study.h',
    language : 'c',
)

discover_modules_script = (
    project_root / 'tools/discover_modules.py'
)

collect_sources_script = (
    project_root / 'tools/collect_sources.py'
)

copy_resources_script = (
    project_root / 'tools/copy_resources.py'
)

runtime_init_source = files('tools/runtime_init.c')

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

    main_sources = run_command(
        python,
        collect_sources_script,
        project_root,
        project_root / module_root,
        'main',
        check : true,
    ).stdout().splitlines()

    main_entry = module_root / 'src/main/c/main.c'
    reusable_main_sources = []

    foreach source : main_sources
        if source != main_entry
            reusable_main_sources += source
        endif
    endforeach

    main_include_directories = []
    foreach include_dir : ['headers', 'public']
        include_path = module_root / 'src/main' / include_dir
        if fs.is_dir(include_path)
            main_include_directories += include_directories(include_path)
        endif
    endforeach

    main_resources = custom_target(
        module + '.main-resources',
        output : module + '.main-resources.stamp',
        command : [
            python,
            copy_resources_script,
            project_root / module_root / 'src/main/resources',
            meson.project_build_root() / 'resources' / module / 'main',
            '@OUTPUT@',
        ],
        build_always_stale : true,
        build_by_default : true,
    )

    executable(
        module,
        main_sources + runtime_init_source,
        link_depends : main_resources,
        include_directories : main_include_directories,
    )

    test_entry = module_root / 'src/test/c/main.c'

    test_resources = custom_target(
        module + '.test-resources',
        output : module + '.test-resources.stamp',
        command : [
            python,
            copy_resources_script,
            project_root / module_root / 'src/test/resources',
            meson.project_build_root() / 'resources' / module / 'test',
            '@OUTPUT@',
        ],
        build_always_stale : true,
        build_by_default : true,
    )

    if fs.exists(test_entry)
        test_sources = run_command(
            python,
            collect_sources_script,
            project_root,
            project_root / module_root,
            'test',
            check : true,
        ).stdout().splitlines()

        test_include_directories = main_include_directories
        foreach include_dir : ['headers', 'public']
            include_path = module_root / 'src/test' / include_dir
            if fs.is_dir(include_path)
                test_include_directories += include_directories(include_path)
            endif
        endforeach

        test_executable = executable(
            module + '.test',
            test_sources + reusable_main_sources + runtime_init_source,
            link_depends : [main_resources, test_resources],
            include_directories : test_include_directories,
        )

        test(
            module,
            test_executable,
            env : {
                'C_STUDY_MAIN_RESOURCES' : meson.project_build_root() / 'resources' / module / 'main',
                'C_STUDY_TEST_RESOURCES' : meson.project_build_root() / 'resources' / module / 'test',
            },
        )
    endif

endforeach
