#include <stdio.h>

const double PI = 3.1415926;

int main() {

    double radius = 2.5;

    double area = PI * radius * radius;

    printf("半径为%lf的圆的面积是%.2lf", radius, area);

    return 0;
}