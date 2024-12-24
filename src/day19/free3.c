#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 10
int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 使用 malloc 函数在堆上申请内存，创建一个长度为 10 的数组
    // 如果成功，malloc 将会返回一个指向该内存的指针
    int *p = (int *)calloc(ARR_LEN, sizeof(int));

    // 检测分配是否成功
    if (p == NULL) {
        printf("calloc failed\n");
        exit(EXIT_FAILURE);
    }

    // calloc 会自动清零，输出数组中的元素
    for (int i = 0; i < 10; i++) {
        printf("%d ", p[i]);
    }

    // 手动初始化
    for (int i = 0; i < 10; i++) {
        p[i] = i;
    }

    printf("\n");

    // 输出数组中的元素
    for (int i = 0; i < 10; i++) {
        printf("%d ", p[i]);
    }

    // 释放内存
    free(p);

    return 0;
}
