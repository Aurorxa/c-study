#include <stdio.h>

/**
 * 获取指定整数的二进制表示
 * @param num 整数
 * @return 二进制表示的字符串，不包括前导的 '0b' 字符
 */
char* getBinary(int num) {
    static char binaryString[33];
    int         i, j;

    for (i = sizeof(num) * 8 - 1, j = 0; i >= 0; i--, j++) {
        const int bit   = (num >> i) & 1;
        binaryString[j] = bit + '0';
    }

    binaryString[j] = '\0';
    return binaryString;
}

int main() {

    int a = -9;
    int b = 7;

    printf("整数 %d 的二进制表示：%s \n", a, getBinary(a));
    printf("整数 %d 的二进制表示：%s \n", b, getBinary(b));

    printf("a & b = %d \n", a | b); // a & b = 1

    return 0;
}