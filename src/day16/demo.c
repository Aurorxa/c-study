#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int num = 10;

    int *p = &num;

    printf("num = %d\n", num);
    printf("*p = %d\n", *p);
    printf("p = %p\n", p);
    printf("&num = %p\n", &num);
    printf("&p = %p\n", &p);
    printf("sizeof(int) = %lu\n", sizeof(int));
    printf("sizeof(int *) = %lu\n", sizeof(int *));
    return 0;
}