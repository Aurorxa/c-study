#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {

    // 声明函数指针（变量）
    int (*p)(int, int);
    // 将函数赋值给函数指针
    p = max;

    int a = 10;
    int b = 20;

    // 普通函数调用方式来调用函数
    int maxValue = max(a, b);
    printf("%d 和 %d 中的最大值是 %d\n", a, b, maxValue);

    // 函数指针调用方式来调用函数
    maxValue = (*p)(a, b);
    printf("%d 和 %d 中的最大值是 %d\n", a, b, maxValue);

    return 0;
}