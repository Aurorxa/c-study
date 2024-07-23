#include <stdio.h>

int main() {

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

    return 0;
}