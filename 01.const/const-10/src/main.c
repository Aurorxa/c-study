#include <stdio.h>

int main(void) {

    // 130 是 8 进制，转换成 10 进制是 88 ，以 88 作为 ASCII 码值的字符是 'X'
    printf("%c\n", '\130');
    // 0x30 是 16 进制，转换成 10 进制是 48 ，以 48 作为 ASCII 码值的字符是 '0'
    printf("%c\n", '\x30');

    return 0;
}