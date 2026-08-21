#include "game.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "game-outer.h"

/* 游戏函数的实现 */

void play_game() {
    printf("========开始玩游戏========");
}

int random_in_range(const int min, const int max) {
    assert(min <= max);

    // 扫雷不要求密码学安全；main.c 负责在程序启动时设置 rand() 的种子。
    // NOLINTNEXTLINE(cert-msc30-c,cert-msc50-cpp)
    return min + rand() % (max - min + 1);
}
