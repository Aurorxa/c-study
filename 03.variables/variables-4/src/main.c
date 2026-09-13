#include <stdio.h>

// 全局变量
int n = 2026; // [!code highlight]

int main(void) {

    // 局部变量
    int n = 10; // [!code highlight]

    // 打印变量
    printf("n = %d\n", n);

    return 0;
}