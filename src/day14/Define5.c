#include <stdio.h>

/**
 * 定义枚举
 */
enum Color {
    RED = 1,
    GREEN, // 2
    BLUE   // 3
};

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    enum Color color;

    printf("请输入颜色(1-3)：");
    scanf("%d", &color);
    switch (color) {
        case RED:
            printf("红色\n");
            break;
        case GREEN:
            printf("绿色\n");
            break;
        case BLUE:
            printf("蓝色\n");
            break;
        default:
            printf("输入错误\n");
            break;
    }

    return 0;
}