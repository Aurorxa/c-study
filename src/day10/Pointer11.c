#include <stddef.h>
#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int  num = 10;
    int *p   = NULL;
    p        = num; // 错误
    printf("p = %d\n", *p);

    return 0;
}