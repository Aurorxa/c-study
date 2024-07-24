#include <stdio.h>

#define  SIZE 10

int main() {

    // 定义数组并初始化
    int a[] = {12, 2, 31, 24, 15, -36, 67, 108, 29, 51};
    int b[SIZE];

    // 复制数组
    for (int i = 0; i < SIZE; i++) {
        b[i] = a[i];
    }

    // 打印数组 b 中的全部元素
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}