#include <stdio.h>

#include "add.h"

#define SEPARATOR "------------------------\n"
#define PRINT_SEPARATOR() printf(SEPARATOR)

int main() {
    int sum = add(1, 2);
    printf("结果是: %d\n", sum);

    PRINT_SEPARATOR();

    return 0;
}