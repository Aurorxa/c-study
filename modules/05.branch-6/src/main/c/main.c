#include <stdio.h>

/**
 * 输入一个年龄，并判断年龄：
 * ① 如果年龄 < 18 ，则输出：少年
 * ② 如果年龄 >= 18 且 < 44 ，则输出：青年
 * ③ 如果年龄 >= 44 且 < 59 ，则输出：中老年
 * ④ 如果年龄 >= 59 且 < 89 ，则输出：老年
 * ⑤ 如果年龄 >= 90 ，则输出：老寿星
 */
int main() {
    int age = 0;
    printf("请输入一个年龄：");
    scanf("%d", &age);
    if (age < 18) {
        printf("%d 岁是少年\n", age);
    } else if (age < 44) {
        printf("%d 岁是青年\n", age);
    } else if (age < 59) {
        printf("%d 岁是中老年\n", age);
    } else if (age < 89) {
        printf("%d 岁是老年\n", age);
    } else {
        printf("%d 岁是老寿星\n", age);
    }
    return 0;
}
