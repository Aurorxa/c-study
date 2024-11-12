#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int a = 10;
    int b = a;

    printf("a = %d\n", a); // a = 10
    printf("b = %d\n", b); // b = 10

    b = 20;

    printf("a = %d\n", a); // a = 10
    printf("b = %d\n", b); // b = 20

    return 0;
}
