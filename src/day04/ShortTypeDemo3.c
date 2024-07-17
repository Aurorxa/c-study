#include <limits.h>
#include <stdio.h>

int main() {

    printf("unsigned short 类型的范围是[0,%hu]\n", USHRT_MAX); // [0,65535]
    printf("short 类型的范围是[%hd,%hd]\n", SHRT_MIN,SHRT_MAX); // [-32768,32767]

    return 0;
}
