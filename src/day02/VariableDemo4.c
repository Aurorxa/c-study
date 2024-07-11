#include <stdio.h>

int main() {

    int  a = 1;
    char c = 'a';

    char result = a + c;
    printf("result = %c\n", result);

    printf("%d\n", &a); // %d 以十进制的方式输出地址编号
    printf("%p\n", &a); // %p 以指针的方式输出地址编号，十六进制

    return 0;
}