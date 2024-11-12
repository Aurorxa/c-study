#include <stddef.h>
#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int arr[] = {1, 2, 3, 4, 5, 6};

    int *p1 = &arr[0];

    int *p2 = &arr[4];

    ptrdiff_t dist = p2 - p1;
    printf("dist = %td\n", dist);

    return 0;
}