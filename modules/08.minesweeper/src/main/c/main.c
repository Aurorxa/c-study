#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "c_study.h"
#include "game.h"

/**
 * 初始化菜单
 */
static void initMenu() {
    printf("==================================\n");
    printf("==========    1. 开始    ==========\n");
    printf("==========    2. 退出    ==========\n");
    printf("==================================\n");
}

int main() {
    // 扫雷布雷不涉及密码学安全，使用当前时间作为种子即可。
    // NOLINTNEXTLINE(bugprone-random-generator-seed,cert-msc32-c,cert-msc51-cpp)
    srand((unsigned int)time(nullptr));

    do {
        initMenu();

        int input = 0;
        printf("请选择：");
        scanf("%d", &input);

        // 设置退出标记
        bool isExit = false;

        // 根据输入进行处理
        switch (input) {
            case 1:
                play_game();
                break;
            case 2:
                // 打印游戏结束提示
                printf("游戏结束！！！\n");
                // 退出标记设置为 true
                isExit = true;
                // 跳出 switch 语句
                break;
            default:
                printf("输入错误，请重新输入！！！\n");
                printf_separator();
                break;
        }

        // 如果退出标记为 true，则退出循环
        if (isExit) {
            break;
        }

    } while (true);

    return 0;
}
