#include <stddef.h>
#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int  num = 10;
    int *p1  = &num;
    int *p2  = p1;

    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);

    if (p1 == p2) {
        printf("p1 == p2\n");
    } else {
        printf("p1 != p2\n");
    }

    return 0;
}