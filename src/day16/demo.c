#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int num = 10;

    int *p = &num;

    printf("num = %d\n", num);
    printf("*p = %d\n", *p);
    printf("p = %p\n", p);
    printf("&num = %p\n", &num);
    printf("&p = %p\n", &p);
    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(int *) = %zu\n", sizeof(int *));

    int *ptr = nullptr;

    if (ptr != nullptr) {
        *ptr = 20;
    }

    printf("*ptr = %d\n", *ptr);

    int arr[] = {1, 2, 3, 4, 5};

    int *ptr2 = arr;

    int(*ptr3)[5] = &arr;

    return 0;
}