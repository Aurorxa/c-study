#include <stdio.h>

int main() {

    int score = 0;
    printf("请输入分数：");
    scanf("%d", &score);

    // 容错：分数不可能小于 0 或大于 100
    if (score < 0 || score > 100) {
        printf("输入的分数有误！\n");
        return 0;
    }

    if (score >= 90) {
        printf("奖励你一部华为 mate60 pro\n");
    } else if (score >= 80) {
        printf("奖励你一个 ipad\n");
    } else if (score >= 60) {
        printf("奖励你一个肉夹馍\n");
    } else {
        printf("你的成绩不及格，没有任何奖励！");
    }

    return 0;
}