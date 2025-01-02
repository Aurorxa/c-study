#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int c;
    printf("请输入一个字符：");
    c = getchar();

    putchar(c);
    printf("c = %c\n", c);

    return 0;
}
