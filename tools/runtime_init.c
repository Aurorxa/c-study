#include <locale.h>
#include <stdio.h>

#include "c_study.h"

static void c_study_runtime_init() __attribute__((constructor));

static void c_study_runtime_init() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);
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

/**
 * 打印分隔符
 */
void printf_separator() {
    printf("\n------------------------------------------------\n");
}

void printf_ln() {
    printf("\n");
}
