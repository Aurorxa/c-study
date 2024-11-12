#include <stdio.h>

int main() {

    int month;
    printf("请输入月份 (1-12)：");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%d 月有 31 天\n", month);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("%d 月有 30 天\n", month);
            break;
        case 2:
            printf("%d 月有 28 天或 29 天\n", month);
            break;
        default:
            printf("输入错误！");
            break;
    }

    return 0;
}