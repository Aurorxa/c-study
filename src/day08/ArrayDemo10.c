#include <stdio.h>

int main() {

    // 定义数组和全部初始化：数组初始化的元素个数等于数组的长度。
    int arr[] = {1, 2, 3, 4, 5};

    // 计算数组的长度
    size_t length = sizeof(arr) / sizeof(arr[0]);

    // 遍历数组
    for (int i = 0; i < length; i++) {
        printf("%d \n", arr[i]);
    }

    return 0;
}