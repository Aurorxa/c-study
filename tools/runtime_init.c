#include <locale.h>
#include <stdio.h>

#include "c_study.h"

/**
 * @file runtime_init.c
 * @brief 为每个示例程序提供统一的运行环境和公共输出函数。
 *
 * meson.build 会把本文件加入每个 main/test 可执行目标。constructor 函数
 * 在 main() 前自动执行，用于配置控制台输出和 locale。
 */

static void c_study_runtime_init() __attribute__((constructor));

static void c_study_runtime_init() {
    // 立即显示教学示例的输出，避免调试或交互输入时内容滞留在缓冲区。
    if (setvbuf(stdout, nullptr, _IONBF, 0) != 0) {
        (void)fputs("warning: failed to disable stdout buffering\n", stderr);
    }
    // 立即显示教学示例的输出，避免调试或交互输入时内容滞留在缓冲区。
    // setbuf(stdout, nullptr);
    // Windows 使用 UTF-8 locale 名称；其他平台采用用户环境中的 locale。
#ifdef _WIN32
    const char *locale_name = ".UTF-8";
#else
    const char *locale_name = "";
#endif
    if (setlocale(LC_ALL, locale_name) == nullptr) {
        fputs("warning: failed to configure the user locale\n", stderr);
    }
}

const char *bool_to_string(bool value) {
    return value ? "true" : "false";
}

void printf_separator() {
    printf("\n------------------------------------------------\n");
}

void printf_ln() {
    printf("\n");
}
