#ifndef C_STUDY_VECTOR_H
#define C_STUDY_VECTOR_H

#include <stddef.h>

// ElementType 类型定义
typedef int ElementType;

// Vector 结构体定义
typedef struct Vector {
    // ElementType 类型定义
    ElementType *data;
    // 当前已存储的元素数量
    size_t size;
    // 数组的最大容量
    size_t capacity;
} Vector;

// 创建 Vector
Vector *createVector(size_t init_capacity);

// 销毁 Vector
void destroyVector(Vector *vector);

#endif // C_STUDY_VECTOR_H
