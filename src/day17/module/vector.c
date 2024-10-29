#include "./include/vector.h"

#include <malloc.h>

// 创建 Vector
Vector *createVector(size_t init_capacity) {
    Vector *vector   = malloc(sizeof(Vector));
    vector->data     = (int *)malloc(init_capacity * sizeof(int));
    vector->size     = 0;
    vector->capacity = init_capacity;
    return vector;
}

// 销毁 Vector
void destroyVector(Vector *vector) {
    free(vector->data);
    vector->data     = nullptr;
    vector->size     = 0;
    vector->capacity = 0;
}