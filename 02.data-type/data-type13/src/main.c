#include <stdio.h>
#include <float.h>

int main(void) {

    /*
     * 输出各种浮点类型的取值范围
     */
    printf("float 的取值范围：%e 到 %e\n", -FLT_MAX, FLT_MAX);
    printf("double 的取值范围：%e 到 %e\n", -DBL_MAX, DBL_MAX);
    printf("long double 的取值范围：%Le 到 %Le\n", -LDBL_MAX, LDBL_MAX);

    return 0;
}
