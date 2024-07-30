#include <stdio.h>

int main() {

    // 定义普通变量
    int num = 10;
    // 定义指针变量，并将普通变量的地址赋值给指针变量
    int *p = &num;

    printf("p = %p \n",p); // p = 0x7ffc0fc05be4
    printf("p == &num：%d",p == &num); // p == &num：1 (0 是假，非0 是真)

    return 0;
}