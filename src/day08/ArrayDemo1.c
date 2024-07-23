#include <stdio.h>

int main() {

    // 先指定元素的个数和类型，再进行初始化

    // 定义数组
    int arr[3];

    // 给数组元素赋值
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // 遍历数组
    for (int i = 0; i < 3; i++) {
        printf("第 %d 个元素的值：%d \n", i, arr[i]);
    }

    // 计算数组的长度
    printf("数组的长度 = %zu \n", sizeof(arr) / sizeof(int));

    return 0;
}