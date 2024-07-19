#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;

    printf("请输入整数a的值：");
    scanf("%d", &a);
    printf("请输入整数b的值：");
    scanf("%d", &b);

    if (a > b) {
        printf("%d > %d", a, b);
    } else if (a < b) {
        printf("%d < %d", a, b);
    } else {
        printf("%d = %d", a, b);
    }

    return 0;
}