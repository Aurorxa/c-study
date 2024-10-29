#include <math.h>
#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 9.00 的平方根是 = 3.00
    printf("%.2f 的平方根是 = %.2f\n", 9.00, sqrt(9.00));

    return 0;
}
