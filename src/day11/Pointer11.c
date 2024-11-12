#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 定义二维数组
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // 定义二维数组指针
    int(*p)[4] = arr;

    printf("arr[1] 的地址为 %p\n", arr[1]);   // arr[1] 的地址为 0x7ffcea6e0d20
    printf("arr[1] 的地址为 %p\n", p + 1);    // arr[1] 的地址为 0x7ffcea6e0d20
    printf("arr[1] 的地址为 %p\n", *(p + 1)); // arr[1] 的地址为 0x7ffcea6e0d20

    // 定义一维数组指针
    int *p2 = *(p + 1);

    printf("arr[1] 的地址为 %p\n", p2); // arr[1] 的地址为 0x7ffcea6e0d20

    printf("arr[1][1] 的地址为 %p\n", &arr[1][1]);   // arr[1][1] 的地址为 0x7ffd10d20f74
    printf("arr[1][1] 的地址为 %p\n", arr[1] + 1);   // arr[1][1] 的地址为 0x7ffd10d20f74
    printf("arr[1][1] 的地址为 %p\n", *(p + 1) + 1); // arr[1][1] 的地址为 0x7ffd10d20f74

    return 0;
}