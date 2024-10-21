#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int num = 0;
    printf("请输入一个整数：");
    scanf("%d", &num);
    printf("你输入的整数是：%d\n", num);

    return 0;
}