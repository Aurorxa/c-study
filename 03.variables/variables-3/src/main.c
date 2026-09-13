#include <stdio.h>

// 全局变量
int global = 2026;

int main(void) {

    // 局部变量
    int local = 2018;

    // 打印变量
    printf("global = %d\n", global);
    printf("local = %d\n", local);

    return 0;
}