#include "vector.h"

#include <stdio.h>

#define LEN 10

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    Vector *vector = vector_create();

    for (int i = 0; i < LEN; i++) {
        vector_push_back(vector, i + 1);
    }

    // 遍历动态数组
    for (int i = 0; i < vector->size; i++) {
        printf("%d ", vector->data[i]);
    }

    vector_destroy(vector);

    return 0;
}