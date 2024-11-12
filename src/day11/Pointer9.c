#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    // 定义数组
    int arr[] = {1, 2, 3, 4, 5, 6};
    // 获取数组长度
    int len = sizeof(arr) / sizeof(arr[0]);

    // 获取数组的指针
    int *p = arr;

    // 遍历数组
    for (int i = 0; i < len; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}