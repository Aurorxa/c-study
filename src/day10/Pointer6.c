#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int  a  = 0;
    int  b  = 0;
    int *p1 = &a;
    int *p2 = &b;

    printf("请输入 a 的值：");
    scanf("%d", p1);
    printf("请输入 b 的值：");
    scanf("%d", p2);

    if (a < b) {
        int *p = p1;
        p1     = p2;
        p2     = p;
    }

    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n", *p2);

    return 0;
}