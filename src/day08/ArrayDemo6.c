#include <stdio.h>

int main() {

    // 定义数组和部分初始化：会将给定的值从数组的开始位置一个个的赋值，没有赋值的地方，用 0 填充
    int arr[5] = {1, 2};

    // 访问数组元素
    printf("arr[0] = %d\n", arr[0]); // arr[0] = 1
    printf("arr[1] = %d\n", arr[1]); // arr[1] = 2
    printf("arr[2] = %d\n", arr[2]); // arr[2] = 0
    printf("arr[3] = %d\n", arr[3]); // arr[3] = 0
    printf("arr[4] = %d\n", arr[4]); // arr[4] = 0

    return 0;
}