#include <stddef.h>
#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int arr[] = {1, 2, 3, 4, 5, 6};

    int *p  = arr;
    int *p2 = (int *)&arr;

    return 0;
}