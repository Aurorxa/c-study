cmake_minimum_required(VERSION 3.10)

# 项目名称和版本号
project(c-study VERSION 1.0 LANGUAGES C)

# 设置 C 标准
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

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

# 创建可执行文件
foreach (SOURCE ${SOURCES})
    # 获取文件的相对路径
    file(RELATIVE_PATH REL_PATH ${CMAKE_SOURCE_DIR} ${SOURCE})
    # 将路径中的斜杠替换为下划线，生成唯一的可执行文件名
    string(REPLACE "/" "_" EXECUTABLE_NAME ${REL_PATH})
    string(REPLACE "\\" "_" EXECUTABLE_NAME ${EXECUTABLE_NAME})
    string(REPLACE "." "_" EXECUTABLE_NAME ${EXECUTABLE_NAME})

    # 创建可执行文件
    add_executable(${EXECUTABLE_NAME} ${SOURCE})

    # 查找源文件所在的目录，并添加为包含目录（头文件可能在同一目录下）
    get_filename_component(DIR ${SOURCE} DIRECTORY)
    target_include_directories(${EXECUTABLE_NAME} PRIVATE ${DIR})

    # 检查并添加子目录中的 include 目录（如果存在）
    if (EXISTS "${DIR}/include")
        target_include_directories(${EXECUTABLE_NAME} PRIVATE ${DIR}/include)
    endif ()
endforeach ()
