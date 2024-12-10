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

/**
 * 打印整数数组
 *
 * @param arr 需要打印的整数数组
 * @param len 数组的长度
 *
 * 此函数通过遍历数组并以逗号分隔的方式打印数组中的元素
 * 数组用方括号包围，最后一个元素后面没有逗号
 */
void printArray(int arr[], const int len) {
    printf("[");
    for (int i = 0; i < len; i++) {
        // 判断是否为最后一个元素
        if (i == len - 1) {
            // 是最后一个元素，打印元素并关闭数组括号
            printf("%d]\n", arr[i]);
            return;
        }
        // 不是最后一个元素，打印元素并添加逗号分隔
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