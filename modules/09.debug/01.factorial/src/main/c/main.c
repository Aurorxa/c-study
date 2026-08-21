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
    printf("%lld\n", sum(1));  // 1
    printf("%lld\n", sum(2));  // 3
    printf("%lld\n", sum(3));  // 9
    printf("%lld\n", sum(4));  // 33
    printf("%lld\n", sum(5));  // 153
    printf("%lld\n", sum(6));  // 873
    printf("%lld\n", sum(7));  // 5913
    printf("%lld\n", sum(8));  // 46233
    printf("%lld\n", sum(9));  // 409113
    printf("%lld\n", sum(10)); // 4037913
    return 0;
}
