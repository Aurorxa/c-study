#include <stdio.h>
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    double initial = 0.0f;
    printf("请输入初始金额：");
    scanf("%lf", &initial);

    int rate = 0;
    printf("请输入年利率：");
    scanf("%d", &rate);

    int years = 0;
    printf("请输入年份：");
    scanf("%d", &years);

    // 声明一个数组
    double balances[years];

    /* 打印表头 */
    printf("%-8s", " Years "); // 年份列
    for (int i = 0; i < years; ++i) {
        // 打印第一行的利率
        printf("%10d%%", rate + i);
        // 将每个利率下的初始金额存入数组
        balances[i] = initial;
    }

    printf("\n");

    // 计算并打印第 2 - years 年的金额
    // 外层 for 控制行，year 代表年份
    for (int year = 0; year < years; ++year) {
        // 打印第一列的数据，也就是投资的年份，也就是 1~years
        printf("%-8d", year + 1);
        // 内层 for 用于给 balances 数组赋值并打印列
        for (int i = 0; i < SIZE(balances); ++i) {
            // 计算每个利率下的第 i 年余额
            balances[i] *= (1 + (rate + i) / 100.00);
            printf("%10.2lf\t", balances[i]); // 打印每列金额
        }
        printf("\n");
    }

    return 0;
}
