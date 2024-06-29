cmake_minimum_required(VERSION 3.28)
project(day01)

set(CMAKE_C_STANDARD 99)

#  Add executable
add_executable(HelloWorld HelloWorld.c)
# Include header files
target_include_directories(HelloWorld PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})