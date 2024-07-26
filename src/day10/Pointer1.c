#include <stdio.h>

int main() {
    // 定义一个整型指针
    int* ptr;
    // 定义一个整型变量
    int num = 10;
    printf("num = %d\n", num);
    // 将 num 的地址赋值给 ptr
    ptr = &num;
    printf("ptr = %p\n", ptr);

    return 0;
}