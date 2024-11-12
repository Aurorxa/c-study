#include <limits.h>
#include <stdio.h>

int main() {

    printf("unsigned long 类型的范围是[0,%lu]\n", ULONG_MAX); // [0,4294967295]
    printf("long 类型的范围是[%ld,%ld]\n", LONG_MIN,LONG_MAX); // [-2147483648,2147483647]

    return 0;
}