#include <stdio.h>

char *getBinary(int num) {
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

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int num = -10;
    printf("b=%b\n", num); // b=11111111111111111111111111110110
    printf("b=%d\n", num); // b=-10
    printf("b=%u\n", num); // b=4294967286

    return 0;
}