#include <stdio.h>

int main() {

    // 声明一个整型变量，取名为 a
    int a;

    // 给变量赋值
    a = 10;

    printf("a=%d\n", a);

    // 声明一个整型变量，取名为 b ，并直接赋值
    int b = 200;

    // 修改变量 b 的值，将变量 a 的值赋值给变量 b
    b = a;

    printf("b=%d\n", b);

    // 同时声明多个整型的变量并赋值
    int c1 = 10, c2 = 20, c3 = 30;
    printf("c1=%d\n", c1);
    printf("c2=%d\n", c2);
    printf("c3=%d\n", c3);

    return 0;
}