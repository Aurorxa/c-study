#include <stdio.h>
#include <stdlib.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    // 动态分配内存
    int *ptr = (int *)malloc(sizeof(int));
    // 释放内存
    free(ptr);
    // 防止悬空指针
    ptr = NULL;
    // ptr 是空指针
    if (ptr != NULL) {
        *ptr = 20;
        printf("ptr = %d\n", *ptr);
    } else {
        printf("ptr is NULL\n");
    }

    return 0;
}