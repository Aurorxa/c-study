#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    // 定义变量
    int num = 10;

    // 访问变量
    printf("num = %d\n", num);

    // 给变量赋值
    num = 100;

    // 访问变量
    printf("num = %d\n", num);

    printf("%zu", sizeof(int *));

    return 0;
}