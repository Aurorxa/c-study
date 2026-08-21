#include <stdio.h>

/**
 * 阶乘
 *  n! = 1 * 2 * 3 * ... * n
 * @param n >=1
 * @return
 */
static long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

/**
 * 阶乘和
 * @param n >=1
 * @return
 */
static long long sum(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += factorial(i);
    }
    return sum;
}

int main() {
    printf("%lld\n", sum(10));
    return 0;
}