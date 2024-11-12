#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int arr[] = {1, 2, 3, 4, 5};

    int *p = arr;

    // 遍历数组
    for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }

    printf("\n");

    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    p[3] = 8;
    p[4] = 10;

    // 遍历数组
    for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
