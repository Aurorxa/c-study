#include <stdio.h>

int main() {

    // 定义一个整型变量
    int num = 10;
    printf("num = %d \n", num);
    printf("&num = %p \n", &num);

    // 定义一个整型指针
    int *ptr = NULL;

    // 将 num 的地址赋值给 ptr
    ptr = &num;
    printf("ptr = %p \n", ptr);

    printf("num = %d \n", *ptr);

    return 0;
}