#include <stdio.h>

int main() {

    int age = 0;
    printf("请输入你的年龄：");
    scanf("%d", &age);

    if (age < 18) {
        printf("未成年人请在家长陪同下访问！\n");
    }

    printf("欢迎继续访问！");

    return 0;
}