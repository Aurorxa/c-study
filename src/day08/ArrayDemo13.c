#include <stdio.h>

int main() {

    // 定义数组并初始化
    int arr[] = {12, 2, 31, 24, 15, 36, 67, 108, 29, 51};

    // 计算数组的长度
    size_t length = sizeof(arr) / sizeof(int);

    // 变量保存总和
    int sum = 0;

    // 遍历数组
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }

    double avg = (double)sum / length;
    printf("数组的和为：%d\n", sum); // 数组的和为：375
    printf("数组的平均值为：%.2lf\n", avg); //数组的平均值为：37.50

    return 0;
}