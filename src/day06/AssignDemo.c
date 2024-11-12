#include <stdio.h>

int main() {

    int a = 3;
    a += 3; // a = a + 3
    printf("a = %d\n", a); // a = 6

    int b = 3;
    b -= 3; // b = b - 3
    printf("b = %d\n", b); // b = 0

    int c = 3;
    c *= 3; // c = c * 3
    printf("c = %d\n", c); // c = 9

    int d = 3;
    d /= 3; // d = d / 3
    printf("d = %d\n", d); // d = 1

    int e = 3;
    e %= 3; // e = e % 3
    printf("e = %d\n", e); // e = 0

    int m      = 110;
    int n      = 20;
    int result = m > n ? m : n;
    printf("result = %d\n", result); // result = 110

    return 0;
}