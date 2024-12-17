#include <stdio.h>

/**
 * 将一个字符串拷贝到另一个字符串中
 * @param dest
 * @param src
 * @return
 */
char *strcpy(char *dest, const char *src) {
    char *p = dest;
    while (*src != '\0') {
        *dest++ = *src;
        *src++;
    }

    *dest = '\0';

    return p;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    char src[] = "Hello World";

    char dest[sizeof(src) + 1];

    char dest2[sizeof(src) + 1];

    strcpy(dest, src);

    printf("dest = %s\n", dest);

    strcpy(dest2, strcpy(dest, src));

    printf("dest2 = %s\n", dest2);

    return 0;
}