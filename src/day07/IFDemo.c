#include <stdio.h>

int main() {

    int heartBeats = 0;
    printf("请输入您的心率：");
    scanf("%d", &heartBeats);

    if (heartBeats < 60 || heartBeats > 100) {
        printf("您的心率不在正常范围内，请做进一步的检查。\n");
    }

    printf("体检结束！！！");

    return 0;
}