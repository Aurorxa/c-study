#include <stdio.h>

/*
  随意给出一个整数，打印显示它的个位数，十位数，百位数的值。
  格式如下：
    数字xxx的情况如下：
    个位数：
    十位数：
    百位数：
  例如：
    数字153的情况如下：
    个位数：3
    十位数：5
    百位数：1
 */
int main() {

    int num = 153;

    int bai = num / 100;
    int shi = num % 100 / 10;
    int ge  = num % 10;
    printf("百位为：%d \n", bai);
    printf("十位为：%d \n", shi);
    printf("个位为：%d \n", ge);

    return 0;
}