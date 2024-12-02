#include "./include/vector.h"

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_CAPACITY 8
#define THRESHOLD 1024
Vector *vector_create() {
    Vector *vector = (Vector *)malloc(sizeof(Vector));
    if (vector == NULL) {
        printf("ERROR：malloc vector failed\n");
        exit(1);
    }

    E *elements = (int *)malloc(sizeof(E) * DEFAULT_CAPACITY);
    if (elements == NULL) {
        free(vector);
        printf("ERROR：malloc elements failed\n");
        exit(1);
    }

    vector->elements = elements;
    vector->capacity = DEFAULT_CAPACITY;
    vector->size = 0;

    return vector;
}

// 扩容
void grow_capacity(Vector *vector) {
    int new_capacity = 0;
    if ((vector->capacity < THRESHOLD)) {
        new_capacity = vector->capacity << 1;
    } else {
        new_capacity = vector->capacity + (vector->capacity >> 1);
    }

    E *tmp = (E *)realloc(vector, sizeof(E) * new_capacity);
    if (tmp == NULL) {
        printf("ERROR：realloc failed in grow_capacity\n");
        exit(1);
    }

    vector->elements = tmp;
    vector->capacity = new_capacity;
}

void push_back(Vector *vector, E element) {
    // 判断是否需要扩容
    if (vector->size == vector->capacity) {
        grow_capacity(vector);
    }
    // 添加元素
    vector->elements[vector->size++] = element;
}

void vector_destroy(Vector *vector) {
    if (vector != NULL) {
        free(vector->elements);
        free(vector);
    }
}

int vector_size(const Vector *vector) {
    return vector->size;
}

int vector_capacity(const Vector *vector) {
    return vector->capacity;
}

bool vector_empty(const Vector *vector) {
    return vector->size == 0;
}