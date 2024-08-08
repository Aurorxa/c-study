#include <stdio.h>

void getArrayMaxAndMin(int arr[], int len, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < len; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
/**
 * 定义一个函数，求数组的最大值和最小值
 *
 */
int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len   = sizeof(arr) / sizeof(int);

    int max = arr[0];
    int min = arr[1];

    getArrayMaxAndMin(arr, len, &max, &min);

    printf("max = %d, min = %d\n", max, min); // max = 10, min = 1

    return 0;
}