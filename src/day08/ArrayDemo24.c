#include <stdio.h>

int main() {

    // 定义二维数组
    int arr[][4] = {{1, 2, 3, 4}, {5, 6}, {9, 10, 11, 12}};

    // 获取行列数
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    // 打印二维数组元素
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}