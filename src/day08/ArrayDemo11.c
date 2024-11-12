#include <stdio.h>

int main() {

    // 定义数组
    int arr[10];

    // 计算数组的长度
    size_t length = sizeof(arr) / sizeof(int);

    // 给数组的每个元素赋值
    for (int i = 0; i < length; i++) {
        arr[i] = i;
    }

    printf("数组的地址是 = %p\n", arr);

    // 遍历数组
    for (int i = 0; i < length; i++) {
        printf("数组元素 %d 的地址是 = %p\n", arr[i], &arr[i]);
    }

    return 0;
}