#include <stdio.h>

int main() {

    // 指定元素的类型，不指定元素个数，同时进行初始化
    int arr[] = {1, 2, 3, 4, 5};

    // 访问数组元素
    printf("arr[0] = %d\n", arr[0]); // arr[0] = 1
    printf("arr[1] = %d\n", arr[1]); // arr[1] = 2
    printf("arr[2] = %d\n", arr[2]); // arr[2] = 3
    printf("arr[3] = %d\n", arr[3]); // arr[3] = 4
    printf("arr[4] = %d\n", arr[4]); // arr[4] = 5

    return 0;
}