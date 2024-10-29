#include <stdio.h>

#define N 3

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int sum = 20 + N;

    printf("sum = %d\n", sum); // sum = 23

    int arr[] = {1, 2, 3, 4};

    arr[0] = 1;

    return 0;
}
