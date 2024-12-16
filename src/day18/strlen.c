#include <stdio.h>
#include <stdlib.h>

/**
 * 获取字符串长度
 * @param str
 * @return
 */
size_t strlen(const char *str) {
    // 检查参数是否合法
    if (str == NULL) {
        exit(1);
    }
    // 计数法
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
    // 检查参数是否合法
    if (str == NULL) {
        exit(1);
    }
    const char *p = str;
    // 循环结束条件是遇到字符串结束符
    while (*str != '\0') {
        str++;
    }
    // 当循环结束时，str 指向字符串结束符，p 指向字符串首字符
    // 返回字符串长度，即：指针相减
    return str - p;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    size_t len = strlen("abc");
    printf("len = %zu\n", len); // len = 3

    return 0;
}