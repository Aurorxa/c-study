#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int num = 10;

    printf("num = %d\n", num); // num = 10

    int *p = &num;

    int *q = p;

    *q = 20;

    printf("num = %d\n", num); // num = 20

    return 0;
}
