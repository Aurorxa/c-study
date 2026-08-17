#include <stdio.h>

#include "c_study.h"

/*
 * 单目操作符：++、--
 *
 * 前置++：先自增，再使用
 * 后置++：先使用，再自增
 * 前置--：先自减，再使用
 * 后置--：先使用，再自减
 */
int main() {
    int a = 10;
    int b = ++a;
    printf("a = %d\n", a); // a = 11
    printf("b = %d\n", b); // b = 11

    printf_separator();

    a = 10;
    b = a++;
    printf("a = %d\n", a); // a = 11
    printf("b = %d\n", b); // b = 10

    printf_separator();

    a = 10;
    b = --a;
    printf("a = %d\n", a); // a = 9
    printf("b = %d\n", b); // b = 9

    printf_separator();

    a = 10;
    b = a--;
    printf("a = %d\n", a); // a = 9
    printf("b = %d\n", b); // b = 10

    return 0;
}