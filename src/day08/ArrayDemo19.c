#include <stdio.h>

int main() {

    // 原始数组
    int arr[] = {12, 2, 31, -24, 15, -36, 67, 891, 29, 51};

    // 计算数组的长度
    size_t length = sizeof(arr) / sizeof(arr[0]);

    // 打印原始数组中的全部元素
    printf("原始数组：");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 移动最大值到数组的最后一个位置
    for (int i = 0; i < length - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp   = arr[i];
            arr[i]     = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // 打印移动之后的数组
    printf("移动之后的数组：");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}