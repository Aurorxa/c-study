#include <stdio.h>

/*
 * 同一段二进制，不同的数据类型可能有不同的含义。
 */
int main(void) {

    int c = 0b01000001;

    // 变量 c 在内存中数据是没有变化的，只是解释方式不同

    printf("%c\n", c); // A
    printf("%d\n", c); // 65

    return 0;
}
