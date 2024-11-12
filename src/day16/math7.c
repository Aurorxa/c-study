#include <math.h>
#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    double float_val = -10.5;

    // ceil(-10.50) = -10.00
    printf("ceil(%.2f) = %.2f\n", float_val, ceil(float_val));

    // floor(-10.50) = -11.00
    printf("floor(%.2f) = %.2f\n", float_val, floor(float_val));

    return 0;
}
