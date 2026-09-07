#include <stdio.h>

int main(void) {
    // 浮点常量
    printf("float       = %f\n", 3.14f);
    printf("double      = %f\n", 3.14159265358979);
    printf("long double = %Lf\n", 3.14159265358979323846L);

    // 科学计数法
    printf("double (sci) = %e\n", 3.14159265358979);

    // 控制小数位数
    printf("double (.2f) = %.2f\n", 3.14159265358979);
    return 0;
}