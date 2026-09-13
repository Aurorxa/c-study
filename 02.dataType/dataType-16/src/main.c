#include <stdio.h>

int main(void) {
    /*
     * 大范围 --> 小范围
     */

    double d = 3.14;
    // 强制类型转换
    int a = (int)d;

    printf("d = %f\n", d);
    printf("a = %d\n", a);

    return 0;
}
