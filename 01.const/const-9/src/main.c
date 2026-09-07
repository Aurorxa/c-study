#include <stdio.h>

int main(void) {

    /* 转义字符指的是转换原先字符的含义，
     * 'n' 表示的是字母 n，而 \n 表示换行。
     */
    printf("%c\n", '\'');
    printf("%c\n", '\"');
    printf("c:\\test\\code\\test.c\n");
    printf("姓名\t年龄\t身高\n");
    printf("许大仙\t16\t1.9\n");

    return 0;
}