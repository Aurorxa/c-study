#include <stdio.h>

int main() {

    // 定义数组和全部初始化：数组初始化的元素个数等于数组的长度。
    int arr[] = {1, 2, 3, 4, 5};

    // 访问数组元素
    printf("arr[0] = %d\n", arr[0]); // arr[0] = 1
    printf("arr[1] = %d\n", arr[1]); // arr[1] = 2
    printf("arr[2] = %d\n", arr[2]); // arr[2] = 3
    printf("arr[3] = %d\n", arr[3]); // arr[3] = 4
    printf("arr[4] = %d\n", arr[4]); // arr[4] = 5
    printf("arr[-1] = %d\n", arr[-1]); // 得到的是不确定的结果
    printf("arr[5] = %d\n", arr[5]); // 得到的是不确定的结果

    return 0;
}