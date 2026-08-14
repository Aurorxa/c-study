#include "calculator.h"
#include "calculator_example.h"

#include <stdio.h>

int main() {
    printf("12 + 5 = %d\n", calculate(EXAMPLE_LEFT, '+', EXAMPLE_RIGHT));
    printf("12 - 5 = %d\n", calculate(EXAMPLE_LEFT, '-', EXAMPLE_RIGHT));
    printf("12 * 5 = %d\n", calculate(EXAMPLE_LEFT, '*', EXAMPLE_RIGHT));
    printf("12 / 5 = %d\n", calculate(EXAMPLE_LEFT, '/', EXAMPLE_RIGHT));
    printf("12 %% 5 = %d\n", calculate(EXAMPLE_LEFT, '%', EXAMPLE_RIGHT));
    return 0;
}