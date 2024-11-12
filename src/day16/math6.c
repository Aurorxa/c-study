#include <math.h>
#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 2 ^ 3 是= 8.00
    printf("%d ^ %d 是= %.2f\n", 2, 3, pow(2, 3));

    return 0;
}
