#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int arr[] = {1, 2, 3, 4, 5, 6};

    int size = sizeof(arr) / sizeof(arr[0]);

    // 指针遍历的方式
    for (int *p = arr; p < arr + size; p++) {
        printf("%d ", *p);
    }

    return 0;
}