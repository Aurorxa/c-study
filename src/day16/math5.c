#include <math.h>
#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 8.00 的立方根是 = 2.00
    printf("%.2f 的立方根是 = %.2f\n", 8.00, cbrt(8.00));

    return 0;
}
