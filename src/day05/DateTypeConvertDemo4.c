#include <stdio.h>

/**
 * 整型与浮点型运算，整型转为浮点型
 */
int main() {

    int    n4 = 10;
    double d3 = 1.67;

    // n4 是 int 类型，d3 是 double 类型，当 n4 和 d3 运算的时候，会自动转为 double 类型后，然后再计算。
    double result = n4 + d3;

    printf("%.2lf", result);

    return 0;
}