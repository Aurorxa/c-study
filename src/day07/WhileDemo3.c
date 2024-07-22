#include <stdio.h>

int main() {

    // 折叠的次数
    int count = 0;

    // 珠峰的高度
    int zfHeight = 8848860;

    // 每次折叠的高度
    double paperHeight = 0.1;

    while (paperHeight <= zfHeight) {
        count++;
        paperHeight *= 2;
    }

    printf("需要折叠 %d 次，才能得到珠峰的高度。\n", count);
    printf("折纸的高度为 %.2f 米，超过了珠峰的高度", paperHeight / 1000);

    return 0;
}
