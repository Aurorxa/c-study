#include <stdio.h>

#define N 3

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);
    
    int sum = 20 + N;

    printf("sum = %d\n", sum); // sum = 23

    return 0;
}
