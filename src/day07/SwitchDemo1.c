#include <stdio.h>

int main() {
    char chs;
    printf("请输入一个字符（a、b、c、d）：");
    scanf("%c", &chs);

    switch (chs) {
        case 'a':
            printf("今天是星期一 \n");
            printf("窗前明月光 \n");
            break;
        case 'b':
            printf("今天是星期二 \n");
            printf("疑是地上霜 \n");
            break;
        case 'c':
            printf("今天是星期三 \n");
            printf("举头望明月 \n");
            break;
        case 'd':
            printf("今天是星期四 \n");
            printf("低头思故乡 \n");
            break;
        default:
            printf("输入错误！");
            break;
    }

    return 0;
}