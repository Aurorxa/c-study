#include <stdio.h>

int main() {

    // 短整型
    short          a1 = 10;
    signed short   a2 = -10;
    unsigned short a3 = 20;

    printf("a1 = %hd , a2 = %hd , a3 = %hu \n", a1, a2, a3);

    // 整型
    int          b1 = 100;
    signed int   b2 = -100;
    unsigned int b3 = 200U;
    printf("b1 = %d , b2 = %d , b3 = %d \n", b1, b2, b3);

    // 长整型
    long          c1 = 1000L;
    signed long   c2 = -1000L;
    unsigned long c3 = 1000LU;
    printf("b1 = %ld , b2 = %ld , b3 = %lu \n", c1, c2, c3);

    // 长长整型
    long long          d1 = 10000LL;
    signed long long   d2 = -10000LL;
    unsigned long long d3 = 10000LLU;
    printf("d1 = %lld , d2 = %lld , d3 = %llu \n", d1, d2, d3);

    return 0;
}