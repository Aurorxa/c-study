#include <stdio.h>
#include <limits.h>

int main(void) {

    /*
     * 输出各种字符类型的取值范围
     */
    printf("char 的取值范围：%d 到 %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char 的取值范围：%d 到 %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char 的取值范围：0 到 %u\n", UCHAR_MAX);

    return 0;
}
