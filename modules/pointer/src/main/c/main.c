#include <inttypes.h>
#include <locale.h>
#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 传空字符串 "" 会让程序自动读取当前操作系统的默认 Locale（在 Linux 上是 UTF-8，在 Windows UCRT 下也会适配系统设置）
    // 如果想显式强行开启 UTF-8，写 ".UTF-8" 或 "C.UTF-8" 在现代 Linux 和 Windows UCRT 下都是通用的
    setlocale(LC_ALL, ".UTF-8");

    int a = 10;
    printf("普通变量 a = %d\n", a);

    int *p = &a;
    printf("&a = 0x%" PRIxPTR "\n", (uintptr_t)&a);
    printf("p = 0x%" PRIxPTR "\n", (uintptr_t)p);
    printf("p 指针的大小 = %llu \n" , sizeof(p));

    return 0;
}
