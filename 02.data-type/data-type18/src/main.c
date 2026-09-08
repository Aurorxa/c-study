#include <stdio.h>
#include <string.h>

/**
 * 核心：万能交换函数。不管传入的是 int、float 还是指针，只要告诉它大小就能交换。
 * @param a 指针地址
 * @param b 指针地址
 * @param size
 */
static void swap(void *a, void *b, const size_t size) {
    char temp[size];           // 开辟一块临时内存
    memcpy(temp, a, size);     // 把 a 的内存拷贝到 temp
    memcpy(a, b, size);        // 把 b 的内存拷贝到 a
    memcpy(b, temp, size);     // 把 temp 的内存拷贝到 b
}

int main() {
    // 1. 交换整数
    int x = 10, y = 20;
    // 类似于 void* ptr = &x
    swap(&x, &y, sizeof(int));
    printf("整数交换: x=%d, y=%d\n", x, y);

    // 2. 交换浮点数
    float f1 = 3.14f, f2 = 2.71f;
    swap(&f1, &f2, sizeof(float));
    printf("浮点交换: f1=%.2f, f2=%.2f\n", f1, f2);

    // 3. 交换字符串指针
    char *s1 = "Hello", *s2 = "World";
    swap(&s1, &s2, sizeof(char*));
    printf("指针交换: s1=%s, s2=%s\n", s1, s2);

    return 0;
}
