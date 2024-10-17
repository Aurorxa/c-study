#include <stdio.h>

/**
 * 递归函数，计算 n 的阶乘
 * @param n
 * @return 阶乘
 */
int factorial(int n) {
    // 当 n == 0 或 1 的时候，返回 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // 递归调用
    // n * (n - 1) 的阶乘
    return n * factorial(n - 1);
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int n = 5;

    printf("%d 的阶乘是 %d\n", n, factorial(n)); // 5 的阶乘是 120

    return 0;
}