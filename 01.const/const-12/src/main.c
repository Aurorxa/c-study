#include <stdio.h>

int main(void) {

    /*
     * 在 C 语言中，可以将字符串放到一个字符数组中，只要其以 `\0` 作为结束标识。
     */
    char str[] = {'a','b','c', '\0'};
    char str2[] = "abc"; // 语法糖

    printf("%s\n",str);
    printf("%s\n",str2);

    return 0;
}