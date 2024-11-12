#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int  arr[] = {1, 2, 3, 4, 5, 6};
    int *p     = &arr[1];

    printf("p - 1 中保存的地址是： %p\n", p - 1);      // p - 1 中保存的地址是： 0x7ffff29d7bf0
    printf("p - 1 指向的内存的值是： %d\n", *(p - 1)); // p - 1 指向的内存的值是： 1

    printf("p 中保存的地址是： %p\n", p);    // p 中保存的地址是： 0x7ffff29d7bf4
    printf("p 指向的内存的值是： %d\n", *p); // p 指向的内存的值是： 2

    printf("p + 1 中保存的地址是： %p\n", p + 1);      // p + 1 中保存的地址是： 0x7ffff29d7bf8
    printf("p + 1 指向的内存的值是： %d\n", *(p + 1)); // p + 1 指向的内存的值是： 3

    return 0;
}