#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    char str[32];

    printf("请输入字符串：");
    scanf("%[^\n]", str);

    printf("字符串是：%s\n", str);

    return 0;
}