#include <stdio.h>

int main() {

    int num = 100;

    printf("%d 的十进制整数： %d\n", num, num); // 100 的十进制整数： 100
    printf("%d 的八进制整数： %o\n", num, num); // 100 的八进制整数： 144
    printf("%d 的十六进制整数： %x\n", num, num); // 100 的十六进制整数： 64
    printf("%d 的八进制（前缀）整数： %#o\n", num, num); // 100 的八进制（前缀）整数： 0144
    printf("%d 的十六进制（前缀）整数： %#x\n", num, num); // 100 的十六进制（前缀）整数： 0x64
    printf("%d 的十六进制（前缀）整数： %#X\n", num, num); // 100 的十六进制（前缀）整数： 0X64

    return 0;
}