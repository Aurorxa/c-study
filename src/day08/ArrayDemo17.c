#include <stdio.h>

int main() {

    // 原始数组
    int arr[] = {12, 2, 31, 24, 15, -36, 67, 108, 29, 51};

    // 计算数组的长度
    size_t SIZE = sizeof(arr) / sizeof(arr[0]);

    // 打印原始数组中的全部元素
    printf("原始数组：");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 交换数组
    for (int i = 0; i < SIZE / 2; i++) {
        int temp          = arr[i];
        arr[i]            = arr[SIZE - 1 - i];
        arr[SIZE - 1 - i] = temp;
    }

    // 打印交换后的数组
    printf("交换后数组：");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}