#include <stdio.h>

int main(void) {
    // 1. 算术运算（使用 ASCII 码值计算）
    printf("'A' + 1 = %d\n", 'A' + 1);     // 65 + 1 = 66
    printf("'a' - 'A' = %d\n", 'a' - 'A'); // 97 - 65 = 32

    // 2. 结果可以按整数输出，也可以按字符输出
    printf("'A' + 1 作为字符: %c\n", 'A' + 1); // 66 对应的字符是 'B'

    // 3. 关系运算（比较 ASCII 码值大小）
    if ('a' > 'A') {
        printf("小写字母的 ASCII 码大于大写字母\n");
    }

    // 4. 转义字符也能运算
    printf("'\\n' + 1 = %d\n", '\n' + 1); // 10 + 1 = 11

    return 0;
}