#include <stdio.h>
#define ARR_SIZE(a) (sizeof(a) / sizeof(a[0]))

/**
 * 反转数组
 * @param arr 数组
 * @param len 长度
 */
void reverse(int arr[], const int len) {
    for (int start = 0, end = len - 1; start <= end; start++, end--) {
        const int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}

void printArray(int arr[], const int len) {
    printf("[");
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            printf("%d]\n", arr[i]);
            return;
        }
        printf("%d, ", arr[i]);
    }
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    // 定义普通数组
    int arr[] = {1, 2, 3, 4, 5, 6};

    reverse(arr, ARR_SIZE(arr));

    printArray(arr, ARR_SIZE(arr));

    return 0;
}