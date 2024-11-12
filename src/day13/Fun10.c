#include <stdio.h>

/**
 * 定义递归函数，获取第 n 阶台阶的不同的走法
 * @param n
 * @return
 */
int moves(int n) {
    if (n == 1) {
        return 1;
    }

    if (n == 2) {
        return 2;
    }

    return moves(n - 1) + moves(n - 2);
}

int main() {

    int n = 4;

    printf("第 %d 阶台阶的走法有 %d 种\n", n, moves(n)); // 第 4 阶台阶的走法有 5 种

    return 0;
}
