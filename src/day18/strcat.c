#include <stdio.h>
#include <string.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    char str[] = "abc";
    char str2[] = "123";
    char str3[] = "bbb";
    char str4[] = "aaa";
    char str5[] = "abcd";
    char str6[] = "abc";

    printf("%d\n", strcmp(str, str2));
    printf("%d\n", strcmp(str, str3));
    printf("%d\n", strcmp(str, str4));
    printf("%d\n", strcmp(str, str5));
    printf("%d\n", strcmp(str, str6));

    return 0;
}