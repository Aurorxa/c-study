#include <stdio.h>

int main() {

    setbuf(stdout, nullptr);

    printf("整数常量 = %d\n", 1);
    printf("字符常量 = %c\n", 'A');
    printf("浮点数常量 = %f\n", 12.3);
    printf("字符串常量 = %s\n", "你好");

    return 0;
}