#include <stdio.h>

int main() {

    int m = 12, n = 20;

    // 取出两个数中的较小值
    int min = (m < n) ? m : n;

    for (int i = min; i >= 1; i--) {

        if (m % i == 0 && n % i == 0) {
            printf("最大公约数是：%d\n", i); // 公约数

            break; //跳出当前循环结构
        }
    }

    // 取出两个数中的较大值
    int max = (m > n) ? m : n;
    for (int i = max; i <= m * n; i++) {

        if (i % m == 0 && i % n == 0) {

            printf("最小公倍数是：%d\n", i); // 公倍数

            break;
        }
    }

    return 0;
}
