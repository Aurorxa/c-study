#include <stdio.h>

/**
 * 输入一个年龄，如果大于等于18岁，则输出“成年人”，否则输出“未成年人”
 */
int main() {
    int age = 0;
    printf("请输入一个年龄：");
    scanf("%d", &age);
    /*
     * 在 C 语言中，0 表示 false，非 0 表示 true
     */
    bool flag = age >= 18;
    printf("flag: %d\n", flag);
    if (flag) {
        printf("%d 岁是成年\n", age);
    } else {
        printf("%d 岁是未成年\n", age);
    }
    return 0;
}
