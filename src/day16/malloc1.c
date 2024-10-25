#include <malloc.h>
#include <stdio.h>
#include <string.h>

#define ARR_LEN 10
int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int *arr = (int *)malloc(ARR_LEN * sizeof(int));
    if (arr == nullptr) {
        printf("malloc failed\n");
        return -1;
    }

    //    for (int i = 0; i < ARR_LEN; ++i) {
    //        arr[i] = i;
    //    }

    memset(arr, 0, ARR_LEN * sizeof(int));

    for (int i = 0; i < ARR_LEN; ++i) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
