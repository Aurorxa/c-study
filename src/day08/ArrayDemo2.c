#include <stdio.h>

int main() {

    // 定义数组和部分初始化：会将给定的值从数组的开始位置一个个的赋值，没有赋值的地方，用 0 填充
    int arr[5] = {1, 2};

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // 定义数组和全部初始化
    int arr2[5] = {1, 2, 3, 4, 5};
    length      = sizeof(arr2) / sizeof(arr2[0]);
    for (int i = 0; i < length; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    return 0;
}