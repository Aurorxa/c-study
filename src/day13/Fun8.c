#include <stdio.h>

/**
 * 求 1 - n 的和
 * @param n
 * @return 和
 */
int sum(int n) {
    // 当 n == 1 的时候，返回 1
    if (n == 1) {
        return 1;
    }
    // 递归情况：将 n 和 n - 1 的和相加
    return n + sum(n - 1);
}

int main() {

    int n = 5;

    printf("sum(%d) = %d\n", n, sum(n)); // sum(5) = 15

    return 0;
}