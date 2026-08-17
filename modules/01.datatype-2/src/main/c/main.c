#include <stdio.h>

#include "c_study.h"

/*
 * 每一个数据类型都有自己的长度，我们可以通过 sizeof 关键字来获取一个数据类型所占用的字节数。
 * 语法：
 *  sizeof(数据类型)
 *  sizeof 表达式
 * 其结果是 size_t 类型，其对应的格式占位符是 %zu
 */

int main() {
    int a = 10;
    printf("%zu\n", sizeof(int)); // 4
    printf("%zu\n", sizeof(a));   // 4

    printf_separator();

    char chs = 'A';
    printf("%zu\n", sizeof(chs));  // 1
    printf("%zu\n", sizeof(char)); // 1

    printf_separator();

    float f = 3.14f;
    printf("%zu\n", sizeof(f));     // 4
    printf("%zu\n", sizeof(float)); // 4

    printf_separator();

    bool b = true;
    printf("%zu\n", sizeof(b));    // 1
    printf("%zu\n", sizeof(bool)); // 1

    printf_separator();

    char *str = "Hello World";
    printf("%zu\n", sizeof(str));    // 8
    printf("%zu\n", sizeof(char *)); // 8

    printf_separator();

    return 0;
}