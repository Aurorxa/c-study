#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int arr[] = {1, 2, 3, 4, 5, 6};

    int size = sizeof(arr) / sizeof(arr[0]);

    // 传统直接遍历的方式
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // 指针遍历的方式
    for (int i = 0, *p = arr; i < size; ++i) {
        printf("%d ", *(p + i));
    }

    printf("\n");

    // 指针遍历的方式
    for (int *p = arr; p < arr + size; p++) {
        printf("%d ", *p);
    }

    return 0;
}