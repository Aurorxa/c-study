#include <stdio.h>

int main() {
    // 账户余额
    double balance = 0.0;
    // 客户选择
    int selection;
    // 存款金额
    double addMoney;
    // 取款金额
    double minusMoney;
    // 退出标识
    bool exitFlag = false;
    do {
        printf("=========ATM========\n");
        printf("\t1、存款\n");
        printf("\t2、取款\n");
        printf("\t3、显示余额\n");
        printf("\t4、退出\n");
        printf("请选择(1-4)：");

        scanf("%d", &selection);

        switch (selection) {
            case 1:
                printf("您当前的余额是: %.2f\n", balance);
                printf("请输入存款金额：");
                scanf("%lf", &addMoney);
                balance += addMoney;
                printf("存款成功，您当前的余额是：%.2f\n", balance);
                break;
            case 2:
                printf("您当前的余额是: %.2f\n", balance);
                printf("请输入取款金额：");
                scanf("%lf", &minusMoney);
                if (minusMoney > balance) {
                    printf("余额不足，取款失败。\n");
                } else {
                    balance -= minusMoney;
                    printf("取款成功，您的余额为：%.2f\n", balance);
                }
                break;
            case 3:
                printf("您的账户余额为：%.2f\n", balance);
                break;
            case 4:
                exitFlag = true;
                printf("欢迎下次再来。\n");
                break;
            default:
                printf("输入有误，请重新输入。\n");
                break;
        }

    } while (!exitFlag);

    return 0;
}
