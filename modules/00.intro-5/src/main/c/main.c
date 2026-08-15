#include <stdio.h>
#include <string.h>

int main() {
    /*
     * 在 C 语言中，使用双引号括起来的一串字符，称为字符串，如："abcdef"
     * 在字符串中，'\0' 是字符串的结束符，用于标记字符串的结束，
     * 使用 %s 来打印字符串
     */
    printf("%s\n", "Hello, World!");

    /*
     * 在 C 语言中，字符串是以 '\0' 结尾的，即 '\0' 是字符串的结束符。
     */
    char *str = "abc"; // "abc\0"
    printf("%s\n", str);
    printf("%zu\n", strlen(str));

    return 0;
}