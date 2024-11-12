#include <stdio.h>
#include "./include/add.h"

int main() {

    int a = 5;
    int b = 10;

    int result = add(a, b);
    printf("%d + %d = %d\n", a, b, result);

    return 0;
}