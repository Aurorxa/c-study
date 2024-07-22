#include <stdio.h>

int main() {

    bool isFlag = false;
    int  num    = 0;
    do {

        printf("请输入一个整数（必须大于 1 ）：");
        scanf("%d", &num);

        if (num <= 1) {
            printf("输入的数字不是合法，请重新输入！！！\n");
            isFlag = true;
        } else {
            isFlag = false;
        }

    } while (isFlag);

    bool isPrime = true;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        printf("%d 是一个质数\n", num);
    } else {
        printf("%d 不是一个质数\n", num);
    }

    printf("程序结束！\n");

    return 0;
}