#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int num      = 0;
    int original = 0;
    int rev      = 0;
    printf("请输入一个整数：");
    scanf("%d", &num);
    original = num;

    // 从右边开始，依次获取每个数字，然后拼接到 rev 中
    /**
     * 第 1 次，123 % 10 = 3，rev = 0 * 10 + 3 = 3
     * 第 2 次，12 % 10 = 2，rev = 3 * 10 + 2 = 32
     * 第 3 次，1 % 10 = 1，rev = 32 * 10 + 1 = 321
     */
    // 循环结束的条件是 num == 0
    while (num != 0) {
        // 获取 num 右边的第一位数字
        int temp = num % 10;
        // 去掉最后一位数字
        num /= 10;
        // 将 temp 拼接到 rev 的后面
        rev = rev * 10 + temp;
    }

    printf("%d 的反转是 %d\n", original, rev);

    return 0;
}
