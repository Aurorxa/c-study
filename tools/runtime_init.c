#include "c_study.h"

#include <locale.h>
#include <stdio.h>

static void c_study_runtime_init() __attribute__((constructor));

static void c_study_runtime_init() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);
    // 空字符串表示采用用户环境中配置的 locale；失败时保留 C locale。
    if (setlocale(LC_ALL, ".UTF-8") == nullptr) {
        fputs("warning: failed to configure the user locale\n", stderr);
    }
}

/**
 * 打印分隔符
 */
void printf_separator() {
    printf("\n------------------------------------------------\n");
}