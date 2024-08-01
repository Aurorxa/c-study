#include <stddef.h>
#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    char *chs = "Hello World";

    printf("%p\n", &chs);

    return 0;
}