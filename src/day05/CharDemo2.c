#include <limits.h>
#include <stdio.h>

int main() {

    printf("char 的存储空间是 %d 字节\n", sizeof(char)); // 1
    printf("unsigned char 的存储空间是 %d 字节\n", sizeof(unsigned char)); // 1

    printf("char 范围是[%d,%d] \n", CHAR_MIN,CHAR_MAX); // [-128,127]
    printf("unsigned char 范围是[0,%d]\n", UCHAR_MAX); // [0,255]

    return 0;
}