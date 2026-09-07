#include <stdio.h>

int main() {
    // 1. 布尔值相加（常用于统计 true 的个数）
    int count = true + true + false + true;
    printf("count = %d\n", count);  // 输出 3 (1 + 1 + 0 + 1)

    // 2. 布尔值相乘
    printf("true * false = %d\n", true * false); // 输出 0

    // 3. 布尔值作为数组索引或偏移量
    int arr[2] = {100, 200};
    bool is_second = true;
    printf("arr[true] = %d\n", arr[is_second]);  // 输出 200 (相当于 arr[1])

    return 0;
}