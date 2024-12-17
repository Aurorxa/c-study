#include <stdio.h>

/**
 * 将一个字符串拷贝到另一个字符串中
 * @param dest
 * @param src
 * @param n
 * @return
 */
char *strncpy(char *dest,
              const char *src, size_t n) {
    char *p = dest;

    while (n--) {
        *dest++ = *src++;
    }
    // *dest = '\0';

    return p;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    char str[] = "hello";

    char dest[3];

    strncpy(dest, str, sizeof(dest) - 1);
    dest[sizeof(dest) - 1] = '\0';

    printf("dest = %s\n", dest); // dest = he

    return 0;
}