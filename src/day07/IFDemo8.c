#include <stdio.h>

int main() {

    int    month;
    int    age;
    double price = 60;

    printf("请输入月份 (1-12)：");
    scanf("%d", &month);

    printf("请输入年龄：");
    scanf("%d", &age);

    // 旺季
    if (month >= 4 && month <= 10) {
        if (age < 18) {
            price /= 2;
        } else if (age > 60) {
            price /= 3;
        }
    } else {
        if (age >= 18) {
            price = 40;
        } else {
            price = 20;
        }
    }

    printf("票价: %.2lf\n", price);

    return 0;
}