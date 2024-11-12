#include <stdio.h>

/**
 * 不同的整数类型混合运算时，宽度较小的类型会提升为宽度较大的类型，比如 short 转为 int ，int 转为 long 等。
 */
int main() {

    short s1 = 10;

    int i = 20;

    // s1 是 short 类型，i 是 int 类型，当 s1 和 i 运算的时候，会自动转为 int 类型后，然后再计算。
    int result = s1 + i;

    printf("result = %d \n", result);

    return 0;
}