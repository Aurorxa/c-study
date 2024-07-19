#include <stdio.h>

int main() {

    int a = 5;
    int b = 2;

    printf("%d + %d = %d\n", a, b, a + b); // 5 + 2 = 7
    printf("%d - %d = %d\n", a, b, a - b); // 5 - 2 = 3
    printf("%d × %d = %d\n", a, b, a * b); // 5 × 2 = 10
    printf("%d / %d = %d\n", a, b, a / b); // 5 / 2 = 2
    printf("%d %% %d = %d\n", a, b, a % b); // 5 % 2 = 1

    return 0;
}