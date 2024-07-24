#include <stdio.h>

int main() {

    // 定义二维数组
    int arr[][4] = {{1, 2, 3, 4}, {5, 6}, {9, 10, 11, 12}};

    // 输出二维数组中的元素
    printf("%d ", arr[0][0]);
    printf("%d ", arr[0][1]);
    printf("%d ", arr[0][2]);
    printf("%d \n", arr[0][3]);
    printf("%d ", arr[1][0]);
    printf("%d \n", arr[1][1]);
    printf("%d ", arr[2][0]);
    printf("%d ", arr[2][1]);
    printf("%d ", arr[2][2]);
    printf("%d ", arr[2][3]);

    return 0;
}