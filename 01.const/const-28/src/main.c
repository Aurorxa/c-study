#include <stdio.h>

static int add(int a, int b) {
    return a + b;
}

int main() {

    int a = 10;
    int b = 20;
    int c = 0;

    c = add(a, b);

    printf("c = %d\n", c);

    return 0;
}