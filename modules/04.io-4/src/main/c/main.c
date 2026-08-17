#include <stdio.h>

int main() {
    int score = 0;
    printf("请输入分数：");
    /* 一次接收一个变量 */
    scanf("%d", &score);
    printf("分数：%d\n", score);
    return 0;
}
