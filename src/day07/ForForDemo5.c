#include <stdio.h>

int main() {

    // 记录输入的整数
    int num = 0;
    // 记录正数个数
    int positiveCount = 0;
    // 记录负数个数
    int negativeCount = 0;

    while (true) {
        printf("请输入一个整数：");
        scanf("%d", &num);
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        } else {
            printf("程序结束！\n");
            break;
        }
    }

    printf("正数的个数：%d\n", positiveCount);
    printf("负数的个数：%d\n", negativeCount);

    return 0;
}
