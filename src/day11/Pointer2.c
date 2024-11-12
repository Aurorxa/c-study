#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    // 定义普通变量
    int num = 10;

    // 定义指针变量，指向普通变量 num
    int *p = &num;

    // 输出普通变量
    printf("num = %d\n", num);

    // 输出指针变量
    printf("p = %p\n", p);

    // 输出指针变量所指向的变量的值，即：查询数据
    printf("*p = %d\n", *p);

    // 修改指针变量所指向的变量的值，即：修改数据（存储数据）
    *p = 20;

    // 输出指针变量所指向的变量的值，即：查询数据
    printf("*p = %d\n", *p);

    // 输出普通变量
    printf("num = %d\n", num);

    return 0;
}