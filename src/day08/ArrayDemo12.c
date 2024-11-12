#include <stdio.h>

int main() {

    // 定义数组并初始化
    int arr[] = {1, 2, 3, 4, 5};

    // 计算数组的长度
    size_t length = sizeof(arr) / sizeof(int);

    // 遍历数组
    for (int i = 0; i < length; i++) {
        printf("%p\n", &arr[i]);
    }

    return 0;
}