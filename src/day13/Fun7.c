#include <stdio.h>

/**
 * 使用 变长数组(VLA) 动态接收列数
 * @param rows 行
 * @param cols 列
 * @param arr 数组名
 * @return
 */
int pMax(int rows, int cols, int arr[rows][cols]) {
    int max = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main() {
    // 定义二维数组
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // 获取数组的行和列
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    // 获取二维数组中元素的最大值
    int max = pMax(rows, cols, arr);

    // 打印最大值
    printf("max = %d\n", max);

    return 0;
}
