#include <stdio.h>

#define LEN 10
int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    char str[LEN] = {'\0'};

    printf("请输入字符串：");

    scanf("%9s", str); // [!code highlight]

    printf("字符串是：%s\n", str);

    return 0;
}