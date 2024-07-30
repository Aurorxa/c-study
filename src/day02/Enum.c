#include <stdio.h>

enum Sex {
    MALE   = 1,
    FEMALE = 2,
};

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    enum Sex sex;

    printf("请输入性别(1 表示男性, 2 表示女性)：");
    scanf("%d", &sex);
    printf("您的性别是：%d\n", sex);

    return 0;
}