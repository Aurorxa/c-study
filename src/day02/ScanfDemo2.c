#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    int absNum;

    if (num < 0) {
        absNum = -num;
    } else {
        absNum = num;
    }

    printf("%d的绝对值是：%d", num, absNum);

    return 0;
}