#include <stddef.h>
#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    char *chs = "Hello World";

    printf("%p\n", &chs);

    char c[] = "hello world";
    printf("%s\n", c);

    return 0;
}