#include <stdio.h>

int main() {

    // 定义二维数组
    int arr[3][4];

    // 初始化：给二维数组赋值
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[0][3] = 4;

    arr[1][0] = 5;
    arr[1][1] = 6;
    arr[1][2] = 7;
    arr[1][3] = 8;

    arr[2][0] = 9;
    arr[2][1] = 10;
    arr[2][2] = 11;
    arr[2][3] = 12;

    // 输出二维数组中的元素
    printf("%d ", arr[0][0]);
    printf("%d ", arr[0][1]);
    printf("%d ", arr[0][2]);
    printf("%d \n", arr[0][3]);
    printf("%d ", arr[1][0]);
    printf("%d ", arr[1][1]);
    printf("%d ", arr[1][2]);
    printf("%d \n", arr[1][3]);
    printf("%d ", arr[2][0]);
    printf("%d ", arr[2][1]);
    printf("%d ", arr[2][2]);
    printf("%d ", arr[2][3]);

    return 0;
}