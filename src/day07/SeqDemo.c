#include <stdio.h>

int main() {

    int x = 1;
    int y = 2;
    printf("x = %d \n", x); // x = 1
    printf("y = %d \n", y); // y = 2

    // 对 x 和 y 的值进行修改
    x++;
    y = 2 * x + y;
    x = x * 10;

    printf("x = %d \n", x); // x = 20
    printf("y = %d \n", y); // y = 6

    return 0;
}