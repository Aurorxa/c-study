#include <stdio.h>

/**
 * 阶乘
 *  n! = n * (n-1) * (n-2) * ... * 1
 * @param n >=1
 * @return
 */
static long long factorial(const int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    printf("%lld\n", factorial(0));  // 1
    printf("%lld\n", factorial(1));  // 1
    printf("%lld\n", factorial(2));  // 2
    printf("%lld\n", factorial(3));  // 6
    printf("%lld\n", factorial(4));  // 24
    printf("%lld\n", factorial(5));  // 120
    printf("%lld\n", factorial(6));  // 720
    printf("%lld\n", factorial(7));  // 5040
    printf("%lld\n", factorial(8));  // 40320
    printf("%lld\n", factorial(9));  // 362880
    printf("%lld\n", factorial(10)); // 3628800
    return 0;
}
