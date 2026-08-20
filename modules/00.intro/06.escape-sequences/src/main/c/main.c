#include "c_study.h"

#include <stdio.h>
#include <string.h>

int main() {
    /*
     * 诸如 '\n' 等特殊字符，都是转义字符，用于表示特殊的字符，如：换行符、制表符等。
     * 所谓的转义字符，就是转变了字符的原始含义，如：'\n' 表示换行符，'\t' 表示制表符等。
     */
    printf("abc\ndef"); // '\n' 表示换行符

    printf_separator();

    printf("%zu\n", strlen("abc\ndef")); // 7

    printf_separator();

    printf("abc\tdef\tghi\tjkl"); // '\t' 表示制表符

    printf_separator();

    printf("%zu\n", strlen("abc\tdef\tghi\tjkl")); // 15

    printf_separator();

    /*
     * C 语言中常见的转义字符，如下所示：
     * \n 换行符
     * \a 警报
     * \b 退格
     * \t 制表符，光标移动到下一个水平制表位，通常是下一个 4/8 的倍数
     * \r 回车符
     * \v 垂直制表符
     * \f 换页符
     * \0 空字符
     * \? 问号
     * \\ 反斜杠
     * \' 单引号
     * \" 双引号
     */
    printf("abc\ndef");

    printf_separator();

    printf("\'");

    printf_separator();

    printf("\"");

    printf_separator();

    printf("\\");

    printf_separator();

    /*
     * 在 C 语言中，还可以使用字符的 8 进制或 16 进制来表示字符
     *  \ddd ：8 进制，ddd 表示 1 ~ 3 位 8 进制，如：\130 表示 'X'
     *  \xdd ：16 进制，dd 表示 2 位 16 进制，如：\x30 表示 '0'
     *
     *  '\0' 表示空字符，即 '\0' 是字符串的结束符，用于标记字符串的结束。
     */
    printf("%c\n", '\130'); // X
    printf("%c\n", '\x30'); // 0
    // 方括号之间输出了 NUL，但 NUL 是不可见字符；其数值为 0
    printf("NUL character: [%c], numeric value: %d\n", '\0', '\0');

    printf("%s\n", "abc\0def");          // 只输出 abc
    printf("%zu\n", strlen("abc\0def")); // 3

    return 0;
}