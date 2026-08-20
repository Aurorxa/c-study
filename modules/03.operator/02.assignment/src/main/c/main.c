#include <stdio.h>

#include "c_study.h"

int main() {
    /*
     * 赋值操作符：=
     * 赋值操作符的左边是变量名，右边是值，值会被赋给变量。
     */
    int a = 10;
    a = 20;
    printf("a = %d\n", a); // a = 20

    printf_separator();

    /*
     * 连续赋值，如：a = b = c = 10;
     * 其方向是从右到左，即：c = 10，b = c，a = b
     */
    int b = 0;
    int c = 0;
    a = b = c = 10;
    printf("a = %d\n", a); // a = 10
    printf("b = %d\n", b); // b = 10
    printf("c = %d\n", c); // c = 10

    printf_separator();

    /*
     * 复合赋值运算符：+=、-=、*=、/=、%=
     */
    a = 10;
    a += 20;               // a = a + 20;
    printf("a = %d\n", a); // a = 30
    a -= 20;               // a = a - 20;
    printf("a = %d\n", a); // a = 10
    a *= 20;               // a = a * 20;
    printf("a = %d\n", a); // a = 200
    a /= 20;               // a = a / 20;
    printf("a = %d\n", a); // a = 10
    a %= 20;               // a = a % 20;
    printf("a = %d\n", a); // a = 10

    return 0;
}