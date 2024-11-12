#include <stdio.h>
#include <stdlib.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 10 的绝对值是 = 10
    printf("%d 的绝对值是 = %lld\n", 10, llabs(10));

    // -10 的绝对值是= 10
    printf("%d 的绝对值是= %lld\n", 10, llabs(10));

    return 0;
}
