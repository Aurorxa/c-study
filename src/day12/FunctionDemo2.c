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

/**
 * 哥德巴赫猜想：任何一个大于 2 的偶数都可以写成两个质数之和
 * @param num
 * @return
 */
bool guess(int num) {
    bool flag = false;
    for (int i = 2; i < num; ++i) {
        if (prime(i) && prime(num - i)) {
            flag = true;
            break;
        }
    }

    return flag;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int num = 0;

    while (true) {
        if (num > 2 && num % 2 == 0) {
            break;
        }
        printf("请输入一个大于 2 的偶数：");
        scanf("%d", &num);
    }

    printf("哥德巴赫猜想正确? %s\n", guess(num) ? "true" : "false");

    return 0;
}
