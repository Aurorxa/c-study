cmake_minimum_required(VERSION 3.22.1)

# 项目名称和版本号
project(c-study VERSION 1.0 LANGUAGES C)

# 设置 C 标准
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")

if (CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(STATUS "Building for 64-bit")
else ()
    message(STATUS "Building for 32-bit")
endif ()

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_definitions(-D_DEBUG)
elseif (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_definitions(-DNDEBUG)
elseif (CMAKE_BUILD_TYPE STREQUAL "RelWithDebInfo")
    add_definitions(-DRELWITHDEBINFO)
elseif (CMAKE_BUILD_TYPE STREQUAL "MinSizeRel")
    add_definitions(-DMINSIZEREL)
endif ()

# 辅助函数，用于递归查找所有源文件
function(collect_sources result dir)
    file(GLOB_RECURSE new_sources "${dir}/*.c")
    set(${result} ${${result}} ${new_sources} PARENT_SCOPE)
endfunction()

# 查找顶层 include 目录（如果存在）
if (EXISTS "${CMAKE_SOURCE_DIR}/include")
    include_directories(${CMAKE_SOURCE_DIR}/include)
endif ()

# 查找所有源文件
set(SOURCES)
collect_sources(SOURCES ${CMAKE_SOURCE_DIR})

# 用于存储已经处理过的可执行文件名，防止重复
set(EXECUTABLE_NAMES)

# 用于拷贝 resources 目录下的所有文件到可执行文件同一目录
function(copy_resources executable_name source_dir)
    if (EXISTS "${source_dir}")
        # 查找 resources 目录中的所有文件
        file(GLOB_RECURSE RESOURCE_FILES "${source_dir}/*")

        # 遍历每个资源文件并添加拷贝命令
        foreach (RESOURCE_FILE ${RESOURCE_FILES})
            # 获取文件相对于 resources 目录的相对路径
            file(RELATIVE_PATH REL_PATH ${source_dir} ${RESOURCE_FILE})

            # 定义目标文件的路径（复制到可执行文件所在目录）
            set(TARGET_FILE "$<TARGET_FILE_DIR:${executable_name}>/${REL_PATH}")

            # 添加文件拷贝命令
            add_custom_command(
                    TARGET ${executable_name} POST_BUILD
                    COMMAND ${CMAKE_COMMAND} -E make_directory "$<TARGET_FILE_DIR:${executable_name}>"
                    COMMAND ${CMAKE_COMMAND} -E copy_if_different "${RESOURCE_FILE}" "${TARGET_FILE}"
                    COMMENT "Copying ${RESOURCE_FILE} to $<TARGET_FILE_DIR:${executable_name}>"
            )
        endforeach ()
    endif ()
endfunction()

# 创建可执行文件
foreach (SOURCE ${SOURCES})
    # 获取文件的相对路径
    file(RELATIVE_PATH REL_PATH ${CMAKE_SOURCE_DIR} ${SOURCE})
    # 将路径中的斜杠替换为下划线，生成唯一的可执行文件名
    string(REPLACE "/" "_" EXECUTABLE_NAME ${REL_PATH})
    string(REPLACE "\\" "_" EXECUTABLE_NAME ${EXECUTABLE_NAME})
    string(REPLACE "." "_" EXECUTABLE_NAME ${EXECUTABLE_NAME})

    # 处理与 CMakeLists.txt 文件同名的问题
    if (${EXECUTABLE_NAME} STREQUAL "CMakeLists_txt")
        set(EXECUTABLE_NAME "${EXECUTABLE_NAME}_exec")
    endif ()

    # 检查是否已经创建过同名的可执行文件
    if (NOT EXECUTABLE_NAME IN_LIST EXECUTABLE_NAMES)
        list(APPEND EXECUTABLE_NAMES ${EXECUTABLE_NAME})
        # 链接 math 库
        LINK_LIBRARIES(m)
        # 创建可执行文件
        add_executable(${EXECUTABLE_NAME} ${SOURCE})

        # 查找源文件所在的目录，并添加为包含目录（头文件可能在同一目录下）
        get_filename_component(DIR ${SOURCE} DIRECTORY)
        target_include_directories(${EXECUTABLE_NAME} PRIVATE ${DIR})

        # 检查并添加子目录中的 include 目录（如果存在）
        if (EXISTS "${DIR}/include")
            target_include_directories(${EXECUTABLE_NAME} PRIVATE ${DIR}/include)
        endif ()

        # 检查并添加 module 目录中的所有 C 文件（如果存在）
        if (EXISTS "${DIR}/module")
            file(GLOB_RECURSE MODULE_SOURCES "${DIR}/module/*.c")
            target_sources(${EXECUTABLE_NAME} PRIVATE ${MODULE_SOURCES})
        endif ()

        # 检查并拷贝 resources 目录下的所有文件到可执行文件同一目录
        if (EXISTS "${DIR}/resources")
            copy_resources(${EXECUTABLE_NAME} "${DIR}/resources")
        endif ()
    endif ()
endforeach ()
