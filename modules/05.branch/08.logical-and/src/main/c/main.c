#include <stdio.h>

/**
 * 输入一个年龄，如果年龄在 18 ~ 36 之间，则输出：青年
 */
int main() {
    int age = 0;
    printf("请输入一个年龄：");
    scanf("%d", &age);
    if (age >= 18 && age <= 36) {
        printf("青年\n");
    }
    return 0;
}
