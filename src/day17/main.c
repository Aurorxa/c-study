#include "vector.h"

#include <stdio.h>
#include <time.h>

#define LEN 20

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    const Vector *vector = vector_create();

    const clock_t start = clock(); // 开始计时

    for (int i = 0; i < LEN; i++) {
        vector_push_back(vector, i + 1);
    }

    const clock_t end = clock(); // 结束计时

    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("方法执行时间: %f 秒\n", cpu_time_used);

    // 遍历动态数组
    for (int i = 0; i < vector->size; i++) {
        printf("%d ", vector->elements[i]);
    }

    vector_destroy(vector);

    return 0;
}