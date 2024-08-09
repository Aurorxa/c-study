#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int arr[][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};

    // 获取数组的行数
    int rows = sizeof(arr) / sizeof(arr[0]);
    // 获取数组的列数
    int cols = sizeof(arr[0]) / sizeof(int);

    // 传统的方式遍历数组
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // 使用指针的方式遍历数组

    return 0;
}