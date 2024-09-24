#include <stddef.h>
#include <stdio.h>

#define BOOL_TO_STRING(x) ((x) ? "true" : "false")
int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int arr[3][4] = {
        {1, 2, 3, 4},
        {11, 22, 33, 44},
        {111, 222, 333, 444}};

    // arr == &arr[0]: true
    printf("arr == &arr[0]: %s\n\n", BOOL_TO_STRING(arr == &arr[0]));

    // 定义二维数组指针
    int(*p)[4] = arr;

    // p = 0x7ffcb723ad30
    printf("p = %p\n", p);
    // arr = 0x7ffcb723ad30
    printf("arr = %p\n", arr);
    // &arr = 0x7ffcb723ad30
    printf("&arr = %p\n", &arr);
    // p == arr == &arr: true
    printf("p == arr == &arr: %s\n\n", BOOL_TO_STRING(p == arr && p == &arr[0]));

    // p+1 = 0x7ffcb723ad40
    printf("p+1 = %p\n", p + 1);
    // arr+1 = 0x7ffcb723ad40
    printf("arr+1 = %p\n", arr + 1);
    // &arr+1 = 0x7ffcb723ad60
    printf("&arr+1 = %p\n", &arr + 1);
    // p+1 == arr+1 == &arr+1: true
    printf("p+1 == arr+1 == &arr+1: %s\n\n", BOOL_TO_STRING((p + 1) == (arr + 1) && (p + 1) == (&arr[0] + 1)));

    // p+2 = 0x7ffcb723ad50
    printf("p+2 = %p\n", p + 2);
    // arr+2 = 0x7ffcb723ad50
    printf("arr+2 = %p\n", arr + 2);
    // &arr+2 = 0x7ffcb723ad90
    printf("&arr+2 = %p\n", &arr + 2);
    // p+1 == arr+1 == &arr+1: true
    printf("p+1 == arr+1 == &arr+1: %s\n\n", BOOL_TO_STRING((p + 2) == (arr + 2) && (p + 2) == (&arr[0] + 2)));

    // 计算内存地址之差
    ptrdiff_t diff = (char *)p + 1 - (char *)p;
    // p + 1 和 p 相差了：1 字节
    printf("p + 1 和 p 相差了：%td 字节\n", diff);

    return 0;
}