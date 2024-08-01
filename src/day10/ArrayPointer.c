#include <stddef.h>
#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int arr[] = {1, 2, 3, 4, 5};

    printf("arr + 1 = %p\n", arr + 1);
    printf("&arr + 1 = %p\n", &arr + 1);

    printf("%d", arr == &arr);

    return 0;
}