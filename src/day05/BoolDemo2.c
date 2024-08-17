#include <stdio.h>
// 宏定义
#define BOOL int
#define TRUE 1
#define FALSE 0

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);
    
    BOOL handsome = 0;
    printf("帅不帅[FALSE 丑，TRUE 帅]： ");
    scanf("%d", &handsome);

    if (handsome) {
        printf("你真的很帅！！！");
    } else {
        printf("你真的很丑！！！");
    }

    return 0;
}
