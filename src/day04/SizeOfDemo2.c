#include <stdio.h>
#include <stddef.h>

int main() {

    int num = 10;

    size_t s = sizeof(num);

    printf("%zu \n", s); // 4

    return 0;
}