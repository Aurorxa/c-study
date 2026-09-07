#include <stdio.h>

// 定义枚举类型
enum Color {
    // 枚举常量，默认从 0 开始，依次递增
    RED,
    // 枚举常量，可以指定值
    WHITE = 10,
    BLACK
};

int main(void) {

    printf("%d\n", RED);
    printf("%d\n", WHITE);
    printf("%d\n", BLACK);

    return 0;
}