#include <stdio.h>

int main(void) {
    /*
     * 大整数 --> 小整数（能造成数据丢失。）
     */

    int a = 300;
    // 强制类型转换
    unsigned char b = (unsigned char)a;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
