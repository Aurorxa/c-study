#ifndef C_STUDY_VECTOR_H
#define C_STUDY_VECTOR_H

#include <stddef.h>

typedef int E;

typedef struct {
    // 元素
    E *elements;
    // 数组容量，即：数组中可以存放元素个数
    size_t capacity;
    // 实际需要存放的元素个数
    size_t size;
} Vector;

// 初始化
Vector *vector_create();

// 销毁
void vector_destroy(Vector *vector);

// 在末尾添加元素
void push_back(Vector *vector, E element);

// 获取元素个数
size_t vector_size(const Vector *vector);

// 获取容量
size_t vector_capacity(const Vector *vector);

// 判断是否为空
bool vector_empty(const Vector *vector);

#endif // C_STUDY_VECTOR_H
