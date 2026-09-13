#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 20;

    /* 因为 a 和 b 都是整数，
     * 所以编译器知道 a + b 的值也是整数，
     * 所以 c 的类型也应该是整数
     */

    int c = a + b;
    printf("c = %d\n", c);

    return 0;
}
