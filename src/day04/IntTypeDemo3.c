#include <limits.h>
#include <stdio.h>

int main() {

    printf("unsigned int 类型的范围是[0,%u]\n", UINT_MAX); // [0,4294967295]
    printf("int 类型的范围是[%d,%d]\n", INT_MIN,INT_MAX); // [-2147483648,2147483647]

    return 0;
}