#include <stdio.h>

static int check_right() {
    printf("右边被计算了！\n");
    return true;
}

int main() {
    // 1. && 短路：左边是 false，右边不会被执行
    if (false && check_right()) {
        // ...
    }
    // 输出：什么都没有（右边没被计算）

    // 2. || 短路：左边是 true，右边不会被执行
    if (true || check_right()) {
        // ...
    }
    // 输出：什么都没有（右边没被计算）

    return 0;
}