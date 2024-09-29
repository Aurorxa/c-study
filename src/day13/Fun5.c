#include <stdio.h>

void increment(int *a) {
    (*a)++;
    printf("increment 中 a = %d\n", *a); // increment 中 a = 11
}
int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int i = 10;

    printf("main 中 i = %d\n", i); // main 中 i = 10

    increment(&i);

    printf("main 中 i = %d\n", i); // main 中 i = 11

    return 0;
}
