#include <stdio.h>

int main() {

    int num1 = 0b10100110; // 二进制
    int num2 = 0717563; // 八进制
    int num3 = 1000; // 十进制
    int num4 = 0xaf72; // 十六进制

    printf("num1 = %d\n", num1); // num1 = 166
    printf("num2 = %d\n", num2); // num2 = 237427
    printf("num3 = %d\n", num3); // num3 = 1000
    printf("num4 = %d\n", num4); // num4 = 44914

    return 0;
}