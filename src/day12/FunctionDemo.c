#include <stdio.h>

// 等价于 int add(int num1,int num2);
int add(int, int); // 函数原型

int main() {

    int a = 10;
    int b = 20;

    printf("a + b = %d\n", add(a, b));

    return 0;
}

// 函数实现
int add(int a, int b) {
    return a + b;
}
