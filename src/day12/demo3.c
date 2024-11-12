#include <stddef.h>
#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int arr[3][4] = {
        {1, 2, 3, 4},
        {11, 22, 33, 44},
        {111, 222, 333, 444}};

    // 定义二维数组指针
    int(*p)[4] = arr;

    // 计算行和列
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(int);

    // 遍历二维数组中的元素
    for (int i = 0; i < rows; ++i) {
        // 遍历一维数组中的元素
        for (int j = 0; j < cols; ++j) {
            printf("%d ", *(*p + j));
        }
        // 换行
        printf("\n");
        // 移动二维数组指针，继续遍历下一个一维数组
        p++;
    }

    return 0;
}