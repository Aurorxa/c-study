#include <stdio.h>

#include "c_study.h"

/*
 * 在 C 语言中，类型转换有两种：
 * 1. 强制类型转换（显式类型转换）：(类型)表达式
 *      程序员使用 (类型) 明确要求转换。
 * 2. 自动类型转换（隐式类型转换）：自动类型转换
 *      编译器按照 C 语言规则自动转换。
 */
int main() {
    /*
     * 默认情况下，C 语言会自动进行类型转换；
     * 但是，在某些情况下，程序员需要显式地进行类型转换。
     */
    double value = 3.99;

    /*
     * 隐式地将 double 转换为 int 可能丢失小数部分。
     * 项目启用转换警告和 werror 后，下面的语句会导致编译错误。
     */
    // int num = value;

    int num = (int)value;
    printf("value = %lf\n", value); // value = 3.990000
    printf("num = %d\n", num);      // num = 3

    printf_separator();

    // 隐式类型转换（小 --> 大）

    int a = 10;
    double d = a;
    printf("d = %.2lf\n", d); // d = 10.00

    return 0;
}
