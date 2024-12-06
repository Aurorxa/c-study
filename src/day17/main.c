#include "vector.h"

#include <stdio.h>

#define LEN 10

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    const auto vector = vector_create();

    for (int i = 0; i < LEN; i++) {
        push_back(vector, i);
    }

    printf("size: %d\n", vector_size(vector));

    vector_destroy(vector);

    return 0;
}