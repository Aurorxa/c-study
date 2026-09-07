#include <stdio.h>

int main(void) {
    /*
     * 字符常量需要使用单引号（''）括起来，
     * 单引号中有且仅有一个内容，如：'a'、'1' 等。
     */
    printf("%c\n", 'a');
    printf("%c\n", 'b');
    printf("%c\n", '0');
    printf("%c\n", '1');
    printf("%c\n", '9');
    return 0;
}