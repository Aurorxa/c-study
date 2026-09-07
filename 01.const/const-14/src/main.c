#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int main(void) {
    int *p = nullptr;

    p = (int *)malloc(sizeof(int) * SIZE);

    if (p == nullptr) {
        perror("malloc error");
        return 1;
    }

    // 初始化数组
    for (int i = 0; i < SIZE; i++) {
        p[i] = i + 1;
    }

    // 遍历数组
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", p[i]);
    }

    // 释放内存
    free(p);
    p = nullptr;

    return 0;
}