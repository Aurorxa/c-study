#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 10
int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int *arr = (int *)malloc(sizeof(int) * ARR_LEN);

    for (int i = 0; i < ARR_LEN; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < ARR_LEN; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
