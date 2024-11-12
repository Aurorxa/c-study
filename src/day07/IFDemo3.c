#include <stdio.h>

int main() {

    int num = 0;
    printf("请输入一个整数：");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d 是偶数\n", num);
    } else {
        printf("%d 是奇数\n", num);
    }

    return 0;
}