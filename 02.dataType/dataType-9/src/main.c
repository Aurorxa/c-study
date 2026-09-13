#include <stdio.h>

int main(void) {

    printf("%zu\n", sizeof(char));        // 1
    printf("%zu\n", sizeof(bool));        // 1
    printf("%zu\n", sizeof(short));       // 2
    printf("%zu\n", sizeof(int));         // 4
    printf("%zu\n", sizeof(long));        // 4
    printf("%zu\n", sizeof(long long));   // 8
    printf("%zu\n", sizeof(float));       // 4
    printf("%zu\n", sizeof(double));      // 8
    printf("%zu\n", sizeof(long double)); // 16

    return 0;
}
