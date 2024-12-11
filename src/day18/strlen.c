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

/**
 * 获取字符串长度（官方实现）
 * @param str
 * @return
 */
size_t strlen2(const char *str) {
    const char *p = str;
    // 循环结束条件是遇到字符串结束符
    while (*str != '\0') {
        str++;
    }
    // 返回字符串长度
    return str - p;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    char str[] = "Hello World";
    printf("strlen(\"%s\") = %zu\n", str, strlen2(str));

    char str2[] = "HelloWorld";
    printf("strlen(\"%s\") = %zu\n", str2, strlen2(str2));

    return 0;
}