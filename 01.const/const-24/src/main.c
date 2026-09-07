#include <stdio.h>

int main() {
    // 关系运算的结果可以直接赋值给 bool 变量
    bool is_greater = (10 > 5);
    bool is_equal = (3 == 4);

    printf("10 > 5 is %d\n", is_greater); // 输出 1 (true)
    printf("3 == 4 is %d\n", is_equal);   // 输出 0 (false)

    return 0;
}