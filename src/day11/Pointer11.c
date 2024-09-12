#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 定义一个二维数组
    int arr[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12}};

    printf("arr[0][0] = %d\n", arr[0][0]);   // arr[0][0] = 1
    printf("&arr[0][0] = %p\n", &arr[0][0]); // &arr[0][0] = 0x7ffe4bd14720，获取 arr[0][0] 元素的地址
    printf("arr[0] = %p\n", arr[0]);         // arr[0] = 0x7ffe4bd14720，获取 arr[0][0] 的地址
    printf("arr = %p\n", arr);               // arr = 0x7ffe4bd14720，获取 arr[0] 的地址
    printf("&arr = %p\n", &arr);             // &arr = 0x7ffe4bd14720，获取二维数组 arr 的地址

    return 0;
}