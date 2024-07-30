#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
//    setbuf(stdout, NULL);

    int  num = 10;
    int *ptr = &num;

    printf("num = %d\n", num);

    printf("请输入 num 的值：");
    scanf("%d", ptr); // scanf("%d",&num);

    printf("num = %d\n", num);

    return 0;
}