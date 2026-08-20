#include <stdio.h>

/**
 * 输入一个年龄，如果大于等于18岁，则输出“成年人”以及"可以谈恋爱"，否则输出“未成年人”
 */
int main() {
    int age = 0;
    printf("请输入一个年龄：");
    scanf("%d", &age);
    // 判断
    if (age >= 18) {
        printf("%d 岁是成年\n", age);
        printf("可以谈恋爱\n");
    } else {
        printf("%d 岁是未成年\n", age);
        printf("不可以谈恋爱，只能好好学习12\n");
    }
    return 0;
}
