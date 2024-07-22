#include <stdio.h>

int main() {

    int count = 0;

    for (int i = 100; i <= 999; i++) {
        // 获取三位数
        int ge  = i % 10;
        int shi = i / 10 % 10;
        int bai = i / 100;

        // 判定是否为水仙花数
        if (ge * ge * ge + shi * shi * shi + bai * bai * bai == i) {
            printf("水仙花数：%d\n", i);
            count++;
        }
    }

    printf("水仙花数总个数：%d\n", count);

    return 0;
}
