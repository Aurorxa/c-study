#include <math.h>
#include <stdio.h>

int main(void) {
    /* 浮点常量之间的运算 */

    printf("1 + 1.1 =  %f\n", 1 + 1.1);
    printf("1 - 2.1 =  %f\n", 1 - 2.1);
    printf("2 * 2.1 =  %f\n", 2 * 2.1);
    printf("1 / 2.0 =  %f\n", 1 / 2.0);
    printf("1 %% 2.0 =  %f\n", fmod(1, 2.0));

    return 0;
}