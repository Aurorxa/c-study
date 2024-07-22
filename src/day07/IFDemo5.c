#include <stdio.h>

int main() {

    int age = 0;
    printf("请输入年龄：");
    scanf("%d", &age);

    if (age > 18) {
        printf("你年龄大于18，要对自己的行为负责!\n");
    } else {
        printf("你的年龄不大，这次放过你了!\n");
    }

    return 0;
}