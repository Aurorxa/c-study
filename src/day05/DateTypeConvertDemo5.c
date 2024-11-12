#include <stdio.h>

int main() {

    // 赋值：窄类型赋值给宽类型
    int    a1 = 10;
    double a2 = a1;
    printf("a2: %.2f\n", a2); // a2: 10.00

    // 转换：将宽类型转换为窄类型
    double b1 = 10.5;
    int    b2 = b1;
    printf("b2: %d\n", b2); // b2: 10

    return 0;
}