#include <stdio.h>

/**
 * 使用循环来计算斐波那契数列
 * @param n
 * @return
 */
int fib(int n) {

    // 出口条件
    if (n == 1 || n == 2) {
        return 1;
    }

    // 初识条件 a ，对应的是 fib(1)
    int a = 1;
    // 初识条件 b ，对应的是 fib(2)
    int b = 1;
    for (int i = 3; i <= n; ++i) { // 从 3 开始，因为 1 和 2 已经被计算过了
        // 计算当前斐波那契数，即：fib(n) = fib(n-1) + fib(n-2)
        // a 表示前两个斐波那契数较小的，即：fib(n-2)
        // b 表示前两个斐波那契数较大的，即：fib(n-1)
        int temp = a + b;
        // 更新 a 和 b 的值，为计算下一个斐波那契数做准备
        // 现在的 b，即 i - 1 项，变为了新的 a ，即新的 i-2 项
        a = b;
        // 当前计算出的斐波那契数 temp，变为了新的 b ，即新的 i-1 项
        b = temp;
    }

    return b;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int n = 1;
    printf("第 %d 个斐波那契数是 %d\n", n, fib(n)); // 第 1 个斐波那契数是 1
    n = 2;
    printf("第 %d 个斐波那契数是 %d\n", n, fib(n)); // 第 2 个斐波那契数是 1
    n = 3;
    printf("第 %d 个斐波那契数是 %d\n", n, fib(n)); // 第 3 个斐波那契数是 2
    n = 4;
    printf("第 %d 个斐波那契数是 %d\n", n, fib(n)); // 第 4 个斐波那契数是 3
    n = 5;
    printf("第 %d 个斐波那契数是 %d\n", n, fib(n)); // 第 5 个斐波那契数是 5
    n = 6;
    printf("第 %d 个斐波那契数是 %d\n", n, fib(n)); // 第 6 个斐波那契数是 8

    return 0;
}
