#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    // 定义一维数组
    int arr[3] = {1, 2, 3};

    // 定义指针变量
    int *p = arr;

    printf("arr[0] 的地址为 %p\n", arr); // arr[0] 的地址为 0x7ffd580ed19c
    printf("arr[0] 的地址为 %p\n", p);   // arr[0] 的地址为 0x7ffd580ed19c

    printf("arr[1] 的地址为 %p\n", arr + 1); // arr[1] 的地址为 0x7ffd580ed1a0
    printf("arr[1] 的地址为 %p\n", p + 1);   // arr[1] 的地址为 0x7ffd580ed1a0

    printf("arr[2] 的地址为 %p\n", arr + 2); // arr[2] 的地址为 0x7ffd580ed1a4
    printf("arr[2] 的地址为 %p\n", p + 2);   // arr[2] 的地址为 0x7ffd580ed1a4

    return 0;
}