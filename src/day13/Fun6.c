#include <stdio.h>

/**
 * 交换两个变量的值
 * @param x
 * @param y
 */
void swap(int *x, int *y) {
    int temp = *x;
    *x       = *y;
    *y       = temp;

    // swap 函数：x=20，y=10
    printf("swap 函数：x=%d，y=%d\n", *x, *y);
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int a = 10;
    int b = 20;

    // main 函数：a = 10，b = 20
    printf("main 函数：a = %d，b = %d\n", a, b);

    swap(&a, &b);

    // main 函数：a = 20，b = 10
    printf("main 函数：a = %d，b = %d\n", a, b);

    return 0;
}
