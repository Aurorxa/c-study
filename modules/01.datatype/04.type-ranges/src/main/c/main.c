#if defined(_WIN32) && defined(__MINGW32__)
#define USE_MINGW_ANSI_STDIO 1
#endif

#include <float.h>
#include <limits.h>
#include <stdio.h>

#include "c_study.h"

/*
 * 在 C 语言中，可以在 limits.h 或 float.h 中找到各种数据类型的取值范围。
 */
int main() {
    printf("bool 的取值范围 [%d, %d]\n", false, true);

    printf_separator();

    printf("unsigned char 的取值范围 [%u, %u]\n", 0U, (unsigned int)UCHAR_MAX);
    printf("signed char 的取值范围 [%d, %d]\n", SCHAR_MIN, SCHAR_MAX);
    printf("char 的取值范围 [%d, %d]\n", CHAR_MIN, CHAR_MAX);

    printf_separator();

    printf("unsigned short 的取值范围 [%u, %u]\n", 0U, (unsigned int)USHRT_MAX);
    printf("short 的取值范围 [%d, %d]\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned int 的取值范围 [%u, %u]\n", 0U, UINT_MAX);
    printf("int 的取值范围 [%d, %d]\n", INT_MIN, INT_MAX);
    printf("unsigned long 的取值范围 [%lu, %lu]\n", 0UL, ULONG_MAX);
    printf("long 的取值范围 [%ld, %ld]\n", LONG_MIN, LONG_MAX);
    printf("unsigned long long 的取值范围 [%llu, %llu]\n", 0ULL, ULLONG_MAX);
    printf("long long 的取值范围 [%lld, %lld]\n", LLONG_MIN, LLONG_MAX);

    printf_separator();

    printf("float 的有限取值范围 [%e, %e]\n", -(double)FLT_MAX, (double)FLT_MAX);
    printf("float 的最小正规格化正数 %e\n", (double)FLT_MIN);
    printf("double 的有限取值范围 [%e, %e]\n", -DBL_MAX, DBL_MAX);
    printf("double 的最小正规格化正数 %e\n", DBL_MIN);
    printf("long double 的有限取值范围 [%Le, %Le]\n", -LDBL_MAX, LDBL_MAX);
    printf("long double 的最小正规格化正数 %Le\n", LDBL_MIN);

    return 0;
}
