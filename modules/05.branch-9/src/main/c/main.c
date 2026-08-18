#include <stdio.h>

/**
 * 输入一个整数，判断是否是奇数
 */
int main() {
    int num = 0;
    printf("请输入一个整数：");
    scanf("%d", &num);
    /*
     * 在 C 语言中，0 表示 false，非 0 表示 true
     */
    bool flag = num % 2 == 0;
    printf("flag: %d\n", flag);
    if (flag) {
        printf("是偶数\n");
    } else {
        printf("是奇数\n");
    }
    return 0;
}
