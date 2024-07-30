#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int  num = 10;
    int *ptr = &num;
    printf("num = %d\n", num); // num = 10
    // 通过指针变量修改指向内存地址位置上的值
    *ptr = 100;
    printf("num = %d\n", num); // num = 100

    return 0;
}