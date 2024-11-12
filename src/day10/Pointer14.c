#include <stddef.h>
#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int arr[] = {1, 2, 3, 4, 5};

    int *p = arr;

    printf("arr[0] = %d \n", arr[0]);
    printf("p[0] = %d \n", p[0]);

    return 0;
}