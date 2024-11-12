#include <stdio.h>

int main() {

    int temperature = 0;
    printf("请输入水的温度：");
    scanf("%d", &temperature);

    if (temperature > 95) {
        printf("开水 \n");
    } else if (temperature > 70 && temperature <= 95) {
        printf("热水 \n");
    } else if (temperature > 40 && temperature <= 70) {
        printf("温水 \n");
    } else {
        printf("凉水 \n");
    }

    return 0;
}