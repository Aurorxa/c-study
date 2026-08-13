#include <locale.h>
#include <stdio.h>

#define SEPARATOR "------------------------\n"
#define PRINT_SEPARATOR() printf(SEPARATOR)

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 传空字符串 "" 会让程序自动读取当前操作系统的默认 Locale（在 Linux 上是
    // UTF-8，在 Windows UCRT 下也会适配系统设置） 如果想显式强行开启 UTF-8，写
    // ".UTF-8" 或 "C.UTF-8" 在现代 Linux 和 Windows UCRT 下都是通用的
    setlocale(LC_ALL, ".UTF-8");

    /*
     * 字符类型
     * [signed] char 有符号
     * unsigned char 无符号
     */
    char chs1 = 'a';
    printf("%c\n", chs1);

    PRINT_SEPARATOR();

    /* 数据类型的长度 */
    printf("char size = %zu\n", sizeof(char));
    printf("short size = %zu\n", sizeof(short));
    printf("int size = %zu\n", sizeof(int));
    printf("long size = %zu\n", sizeof(long));
    printf("long long size = %zu\n", sizeof(long long));
    printf("float size = %zu\n", sizeof(float));
    printf("double size = %zu\n", sizeof(double));
    printf("long double size = %zu\n", sizeof(long double));
    printf("bool size = %zu\n", sizeof(bool));

    return 0;
}