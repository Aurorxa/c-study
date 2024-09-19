#include <stdio.h>

/**
 * 定义一个函数，计算两个整数的和，并返回
 * @param a 整数
 * @param b 整数
 * @return 和
 */
int add(int a, int b) {
    return a + b;
}

/**
 * 定义一个函数，获取两个整数的最大值，并返回
 * @param a 整数
 * @param b 整数
 * @return 最大值
 */
int max(int a, int b) {
    return a > b ? a : b;
}

int main() {

    int a = 10;

    int b = 20;

    printf("a + b = %d\n", add(a, b));

    printf("a 和 b 的最大值 = %d\n", max(a, b));

    return 0;
}
