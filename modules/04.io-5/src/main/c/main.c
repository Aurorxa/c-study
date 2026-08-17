#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    float c = 0.0f;
    float d = 0.0f;
    /* 提示信息 */
    printf("请输入四个数字（整型、整型、浮点型、浮点型，使用空格隔开）：");
    /*
     * 一次接收多个变量
     * scanf 默认会自动过滤空白字符，包括：空格、制表符以及换行符等
     */
    scanf("%d %d %f %f", &a, &b, &c, &d);
    /* 打印结果 */
    printf("a: %d, b: %d, c: %f, d: %f\n", a, b, c, d);
    return 0;
}
