#include <stdio.h>

int main() {

    int num = 10;

    printf("变量所占内存空间的大小：%zd字节\n", sizeof(num));

    // 数据类型所占内存空间的大小
    printf("数据类型所占内存空间的大小：%zd字节\n", sizeof(int));

    return 0;
}