#include <stdio.h>

/**
 * 输入一个整数，判断是正数、负数还是 0 。
 */
int main() {
    int num = 0;
    printf("请输入一个整数：");
    scanf("%d", &num);
    if (num == 0) {
        printf("0\n");
    } else if (num > 0) {
        printf("%d 是正数\n", num);
    } else {
        printf("%d 是负数\n", num);
    }
    return 0;
}
