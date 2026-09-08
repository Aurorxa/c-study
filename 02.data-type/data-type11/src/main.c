#include <stdio.h>
#include <limits.h>

int main(void) {

    /*
     * 输出各种整数类型的取值范围
     */
    printf("signed short 的取值范围：%d 到 %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short 的取值范围：0 到 %u\n", USHRT_MAX);

    printf("signed int 的取值范围：%d 到 %d\n", INT_MIN, INT_MAX);
    printf("unsigned int 的取值范围：0 到 %u\n", UINT_MAX);

    printf("signed long 的取值范围：%ld 到 %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long 的取值范围：0 到 %lu\n", ULONG_MAX);

    printf("signed long long 的取值范围：%lld 到 %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long 的取值范围：0 到 %llu\n", ULLONG_MAX);

    return 0;
}
