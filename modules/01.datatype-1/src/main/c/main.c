#include "c_study.h"

#include <stdio.h>
#include "add.h"

int main() {
    int sum = add(1, 2);
    printf("结果是: %d\n", sum);

    printf_separator();

    return 0;
}