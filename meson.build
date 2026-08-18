project('c-study', 'c',
        version : '1.0.0',
        meson_version : '>=1.4.0',
        default_options : [
            # warning_level：控制编译器警告级别，具体参数由 Meson 根据编译器生成。
            #
            # | 值         | 描述                               |
            # |------------|------------------------------------|
            # | 0          | 关闭 Meson 额外启用的警告          |
            # | 1          | 启用常用警告                       |
            # | 2          | 启用更多警告                       |
            # | 3          | 启用较严格警告                     |
            # | everything | 启用编译器支持的几乎所有警告       |
            'warning_level=3',

            # c_std：指定 C 语言标准；gnu* 表示相应标准加 GNU 扩展。
            #
            # | 值                                      | 描述                     |
            # |-----------------------------------------|--------------------------|
            # | none                                    | 不显式指定 C 标准        |
            # | c89, c99, c11, c17, c18, c23, c2y      | ISO C 标准               |
            # | c2x                                     | C23 定稿前的标准名称     |
            # | gnu89, gnu99, gnu11, gnu17, gnu18      | ISO C 标准加 GNU 扩展    |
            # | gnu23, gnu2x, gnu2y                    | 新版 C 标准加 GNU 扩展   |
            'c_std=c23',

            # werror：是否将所有编译警告提升为编译错误。
            #
            # | 值    | 描述                 |
            # |-------|----------------------|
            # | true  | 将警告视为错误       |
            # | false | 仅报告警告，继续编译 |
            'werror=true',

            # b_ndebug：控制是否定义 NDEBUG；定义后标准 assert() 不执行检查。
            #
            # | 值         | 描述                              |
            # |------------|----------------------------------|
            # | true       | 所有构建类型都关闭 assert()         |
            # | false      | 所有构建类型都保留 assert()         |
            # | if-release | 仅 release 构建关闭 assert()       |
            'b_ndebug=if-release',

            # b_sanitize 在 Windows/MSYS2 下的支持情况：
            #
            # | 值                | 作用                                     | GCC | Clang |
            # |-------------------|-----------------------------------------|-----|-------|
            # | none              | 关闭 sanitizer                           | ✅️  | ✅️   |
            # | address           | 检查内存越界、use-after-free 等            | ✅️  | ✅️   |
            # | undefined         | 检查整数溢出、非法移位等未定义行为            | ✅️  | ✅️   |
            # | address,undefined | 同时启用 address 和 undefined             | ✅️  | ✅️   |
            # | thread            | 检查线程数据竞争；Windows 下通常不可用       | ❌  | ❌   |
            # | leak              | 检查内存泄漏；Windows 下支持有限            | ❌  | ❌   |
            # | memory            | 检查未初始化内存读取；GCC 不支持             | ❌  | ❌   |
            #
            # address 不能与 thread 或 memory 同时使用；推荐组合为 address,undefined。
            # 'b_sanitize=address,undefined',
        ],
)

cc = meson.get_compiler('c')

# 启用有风险的隐式类型转换警告。
# get_supported_arguments() 会过滤当前编译器不支持的选项，以兼容 GCC 和 Clang。
# 项目已启用 werror=true，因此以下警告会被当作编译错误。
conversion_warning_args = cc.get_supported_arguments([
                                                         # 检查可能改变值或丢失精度的隐式类型转换。
                                                         '-Wconversion',

                                                         # 检查有符号整数与无符号整数之间的隐式转换。
                                                         '-Wsign-conversion',

                                                         # 检查浮点数转换为整数或低精度浮点类型时的精度损失。
                                                         '-Wfloat-conversion',
                                                     ])

add_project_arguments(conversion_warning_args, language : 'c')

# 严格检查 printf、scanf 等函数的格式字符串与参数类型。
# 项目启用了 werror=true，因此格式不匹配会直接导致编译失败。
format_warning_args = cc.get_supported_arguments([
                                                     '-Wformat=2',
                                                 ])

add_project_arguments(format_warning_args, language : 'c')

# ------------------------------------------------------------
# 公共工具
# ------------------------------------------------------------

python = import('python').find_installation()
fs = import('fs')

project_root = meson.project_source_root()
project_support_include = include_directories('tools')

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

    main_include_directories = [project_support_include]
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

    if fs.exists(test_entry)
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
