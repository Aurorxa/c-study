#include <stdio.h>
#include <stdlib.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 10 的绝对值是 = 10
    printf("%d 的绝对值是 = %ld\n", 10, labs(10));

    // -10 的绝对值是= 10
    printf("%d 的绝对值是= %ld\n", -10, labs(-10));

    return 0;
}
