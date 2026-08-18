#include <stdio.h>

#include "c_study.h"

/**
 * 在 C 语言中，用于表示比较的运算符，被称为比较运算符（关系运算符）
 *  关系运算符的结果是布尔类型，即： true 或 false
 * 主要有 == 、 != 、 > 、 < 、 >= 、 <=
 */
int main() {
    int a = 10;
    int b = 20;

    printf("%d == %d: %s\n", a, b, bool_to_string(a == b)); // 10 == 20: false
    printf("%d != %d: %s\n", a, b, bool_to_string(a != b)); // 10 != 20: true
    printf("%d > %d: %s\n", a, b, bool_to_string(a > b)); // 10 > 20: false
    printf("%d < %d: %s\n", a, b, bool_to_string(a < b)); // 10 < 20: true
    printf("%d >= %d: %s\n", a, b, bool_to_string(a >= b)); // 10 >= 20: false
    printf("%d <= %d: %s\n", a, b, bool_to_string(a <= b)); // 10 <= 20: true

    return 0;
}
