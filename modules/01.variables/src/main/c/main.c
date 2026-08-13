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
    /*
     * C 语言规定：sizeof(long) >= sizeof(int)
     */
    printf("long size = %zu\n", sizeof(long));
    printf("long long size = %zu\n", sizeof(long long));
    printf("float size = %zu\n", sizeof(float));
    printf("double size = %zu\n", sizeof(double));
    /*
     * C 语言规定：sizeof(long double) >= sizeof(double)
     */
    printf("long double size = %zu\n", sizeof(long double));
    printf("bool size = %zu\n", sizeof(bool));

    PRINT_SEPARATOR();

    /*
     * sizeof 运算符的返回值是 size_t 类型，格式：
     * sizeof(类型) 或 sizeof 表达式
     */
    int num = 10;
    printf("sizeof(char) = %zu\n", sizeof(int));
    printf("sizeof(num) = %zu\n", sizeof(num));
    printf("sizeof num = %zu\n", sizeof num);

    PRINT_SEPARATOR();

    size_t size = sizeof(int);
    printf("size = %zu\n", size);

    return 0;
}