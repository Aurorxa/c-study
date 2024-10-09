#include <stdio.h>

#define M (n * n + 3 * n)
int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int n = 3;
    // int sum = 3 * (n*n+3*n) + 4 * (n*n+3*n) + 5 * (n*n+3*n);
    int sum = 3 * M + 4 * M + 5 * M;

    printf("sum = %d\n", sum); // sum = 216

    return 0;
}
