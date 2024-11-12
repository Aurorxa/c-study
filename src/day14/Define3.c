#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    BOOL isPass = FALSE;
    BOOL isOk   = TRUE;

    printf("isPass = %d\n", isPass); // isPass = 0
    printf("isOk = %d\n", isOk);     // isOk = 1

    return 0;
}
