#include <stdio.h>

int main() {

    // 定义有符号 short 类型
    signed short s1 = -100;

    printf("%hd\n", s1);

    // 定义无符号 short 类型
    unsigned short s2 = 100;
    printf("%hu\n", s2);

    // 定义 short 类型，默认是有符号
    short s3 = -200;
    printf("%hd\n", s3);

    return 0;
}