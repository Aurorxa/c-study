#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 生成指定范围的随机数的函数
int randomInRange(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {

    // 使用当前时间作为种子
    srand(time(0));

    // 定义范围
    int min = 1;
    int max = 100;

    // 生成并打印随机数
    for (int i = 0; i < 10; ++i) {
        int random = randomInRange(min, max);
        printf("%d \n", random);
    }

    return 0;
}