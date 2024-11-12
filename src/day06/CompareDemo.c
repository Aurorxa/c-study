#include <stdio.h>

int main() {

    int a = 8;
    int b = 7;

    printf("a > b 的结果是：%d \n", a > b); // a > b 的结果是：1
    printf("a >= b 的结果是：%d \n", a >= b); // a >= b 的结果是：1
    printf("a < b 的结果是：%d \n", a < b); // a < b 的结果是：0
    printf("a <= b 的结果是：%d \n", a <= b); // a <= b 的结果是：0
    printf("a == b 的结果是：%d \n", a == b); // a == b 的结果是：0
    printf("a != b 的结果是：%d \n", a != b); // a != b 的结果是：1

    return 0;
}