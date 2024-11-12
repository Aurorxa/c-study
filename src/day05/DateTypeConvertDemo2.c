#include <stdio.h>


int main() {

    int          n2 = -100;
    unsigned int n3 = 20;

    // n2 是有符号，n3 是无符号，当 n2 和 n3 运算的时候，会自动转为无符号类型后，然后再计算。
    int result = n2 + n3;

    printf("result = %d \n", result);

    return 0;
}