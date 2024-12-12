#include <stdio.h>
#include <string.h>

/**
 * 将一个字符串拷贝到另一个字符串中
 * @param dest
 * @param src
 * @return
 */
char *strcpy(char *dest, const char *src) {

    while (*src != '\0') {
        *dest++ = *src;
        *src++;
    }
    *dest = '\0';
    return dest;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    char src[] = "Hello World";
    char dest[20];

    strcpy(dest, src);

    printf("%s\n", dest);

    return 0;
}