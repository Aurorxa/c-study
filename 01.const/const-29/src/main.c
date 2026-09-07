#include <stdio.h>

int main() {

    int num = 0;
    printf("请输入一个年龄：");
    scanf("%d", &num);
    if (num >= 18) {
        printf("成年\n");
    } else {
        printf("未成年\n");
    }
    return 0;
}