#include <math.h>
#include <stdio.h>

/**
 * 判断某个数是否是质数（只能被 1 或其本身整除的自然数，如：2、3、5...）
 * 判断方法：[2,num-1] 范围内没有其它约数
 * @param num
 * @return
 */
bool prime(int num) {
    if (num <= 1) {
        return false;
    }
    // 判断 [2,num-1] 范围内没有其它约数
    // for (int i = 2; i < num; i++) {
    for (int i = 2; i <= sqrt(num); i++) {
        // 如果 num 能被 i 整除，说明 num 不是质数
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    printf("%d\n", prime(2));
    printf("%d\n", prime(3));
    printf("%d\n", prime(4));
    printf("%d\n", prime(5));

    printf("5 是质数? %s\n", prime(-2) ? "true" : "false");

    return 0;
}
