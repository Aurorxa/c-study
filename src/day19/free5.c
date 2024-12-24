#include <stdio.h>
#include <stdlib.h>

#define LEN 10
#define SMALL_SIZE 3
#define BIG_SIZE 13

void print_arr(int *arr, int len) {
    printf("[");
    for (size_t i = 0; i < len; i++) {
        printf("%d, ", *arr++);
    }
    printf("\b\b]\n");
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    // 使用 malloc 函数在堆上申请内存，创建一个长度为 10 的数组
    int *arr = (int *)malloc(LEN * sizeof(int));

    // 检测分配是否成功
    if (arr == NULL) {
        printf("Failed to allocate memory.\n");
        exit(1);
    }

    // 初始化
    for (int i = 0; i < LEN; i++) {
        arr[i] = i;
    }

    // 打印数组中的元素
    print_arr(arr, LEN);

    // 缩容
    int *tmp = (int *)realloc(arr, SMALL_SIZE * sizeof(int));

    // 检测分配是否成功
    if (tmp == NULL) {
        printf("Failed to reallocate memory.\n");
        exit(1);
    }

    // 更新指针
    arr = tmp;

    // 打印数组中的元素
    print_arr(arr, SMALL_SIZE);

    // 扩容
    tmp = (int *)realloc(arr, BIG_SIZE * sizeof(int));

    // 检测分配是否成功
    if (tmp == NULL) {
        printf("Failed to reallocate memory.\n");
        exit(1);
    }

    // 更新指针
    arr = tmp;

    // 初始化新扩容的区域
    for (int i = LEN; i < BIG_SIZE; i++) {
        arr[i] = i;
    }

    // 打印数组中的元素
    print_arr(arr, BIG_SIZE);

    // 释放内存
    free(arr);

    return 0;
}
