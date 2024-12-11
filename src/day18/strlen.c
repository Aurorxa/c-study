#include <stdio.h>

/**
 * 获取字符串长度
 * @param str
 * @return
 */
size_t strlen(const char *str) {
    size_t len = 0;
    while (*str != '\0') {
        str++;
        len++;
    }
    return len;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    char str[] = "Hello World";
    printf("strlen(\"%s\") = %zu\n", str, strlen(str));

    char str2[] = "HelloWorld";
    printf("strlen(\"%s\") = %zu\n", str2, strlen(str2));

    return 0;
}