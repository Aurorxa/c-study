#include <math.h>
#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 10.00 的绝对值是 = 10.00
    printf("%.2f 的绝对值是 = %.2lf\n", 10.00, fabs(10.00));

    // -10.00 的绝对值是= 10.00
    printf("%.2f 的绝对值是= %.2lf\n", -10.00, fabs(10.00));

    return 0;
}
