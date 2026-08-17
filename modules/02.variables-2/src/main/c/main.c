#include <stdio.h>

#include "c_study.h"

/*
 * 在 C 语言中，变量分为两种：
 * 1. 局部变量：在函数内部定义的变量，称为局部变量。其生效范围是当前函数，即：当前函数中可以使用。
 * 2. 全局变量：在函数外部定义的变量，称为全局变量。其生效范围是整个工程，即：整个工程中都可以使用（慎用）。
 */
int global = 2023;
int age = 18;

int main() {
    int local = 2024;

    printf("global = %d\n", global); // global = 2023
    printf("local = %d\n", local);   // local = 2024

    printf_separator();

    printf("age = %d\n", age); // age = 18
    age = 19;
    printf("age = %d\n", age); // age = 19

    {
        age = 20;
        printf("age = %d\n", age); // age = 20
    }

    printf("age = %d\n", age); // age = 20

    return 0;
}