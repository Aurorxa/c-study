#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int num = -10;
    printf("b=%b\n", num); // b=11111111111111111111111111110110
    printf("b=%d\n", num); // b=-10
    printf("b=%u\n", num); // b=4294967286

    return 0;
}