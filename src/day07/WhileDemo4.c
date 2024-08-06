#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int n = 0;
    printf("请输入一个整数：");
    scanf("%d", &n);

    while (n > 1 && n % 2 == 0) {
        n /= 2;
    }

    if (n == 1) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}
