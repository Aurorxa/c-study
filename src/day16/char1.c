#include <ctype.h>
#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    char ch1 = 'A';
    char ch2 = '9';
    char ch3 = 'b';

    // 使用 toupper() 将字符转换为大写

    printf("%c 转换为大写字母是 %c\n", ch1, toupper(ch1));
    printf("%c 转换为大写字母是 %c\n", ch2, toupper(ch2));
    printf("%c 转换为大写字母是 %c\n", ch3, toupper(ch3));

    return 0;
}
