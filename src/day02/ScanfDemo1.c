#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    float radius;

    printf("请输入一个半径：");
    scanf("%f", &radius);

    double area = 3.1415926 * radius * radius;

    printf("半径是%f的圆的面积是%.2lf", radius, area);

    return 0;
}