#include <stdio.h>

int main() {

    // 定义数组并初始化
    int arr[] = {12, 2, 31, 24, 15, -36, 67, 108, 29, 51};

    // 计算数组的长度
    size_t length = sizeof(arr) / sizeof(int);

    // 定义最大值
    int max = arr[0];
    // 定义最小值
    int min = arr[0];

    // 遍历数组
    for (int i = 0; i < length; i++) {
        if (arr[i] >= max) {
            max = arr[i];
        }
        if (arr[i] <= min) {
            min = arr[i];
        }
    }

    printf("数组的最大值为：%d\n", max); // 数组的最大值为：108
    printf("数组的最小值为：%d\n", min); // 数组的最小值为：-36

    return 0;
}