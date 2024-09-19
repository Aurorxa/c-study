#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 定义二维数组
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // 定义二维数组指针
    int(*p)[4] = arr;

    printf("arr[1] = %p\n", (void *)arr[1]);
    printf("arr[1] = %p\n", (void *)(p + 1));
    printf("arr[1] = %p\n", (void *)*(p + 1));

    // 计算数组的行和列
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    // 遍历数组元素
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }

    return 0;
}