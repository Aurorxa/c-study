#include <stdio.h>

int main() {

    int i1 = 10, i2 = 20;
    int i  = i1++;
    printf("i = %d\n", i); // i = 10
    printf("i1 = %d\n", i1); // i1 = 11

    i = ++i1;
    printf("i = %d\n", i); // i = 12
    printf("i1 = %d\n", i1); // i1 = 12

    i = i2--;
    printf("i = %d\n", i); // i = 20
    printf("i2 = %d\n", i2); // i2 = 19

    i = --i2;
    printf("i = %d\n", i); // i = 18
    printf("i2 = %d\n", i2); // i2 = 18

    return 0;
}