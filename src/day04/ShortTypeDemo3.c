#include <limits.h>
#include <stdio.h>

int main() {

    printf("short 类型的范围是[%hd,%hd]\n", SHRT_MIN,SHRT_MAX);
    printf("unsigned short 类型的范围是[%hu,%hu]\n", 0,USHRT_MAX);

    return 0;
}