#include <stdio.h>

int main() {

    // 定义数组并初始化
    int arr[] = {12, 2, 31, 24, 2, -36, 67, 108, 29, 51};

    // 计算数组的长度
    size_t length = sizeof(arr) / sizeof(int);

    // 遍历数组
    printf("当前数组中的元素是：");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // 无限循环
    while (true) {
        // 统计的数字
        int num;
        // 统计数字出现的次数
        int count = 0;
        // 输入数字
        printf("请输入要统计的数字：");
        scanf("%d", &num);

        // 0 作为结束条件
        if (num == 0) {
            break;
        }

        // 遍历数组，并计数
        for (int i = 0; i < length; i++) {
            if (arr[i] == num) {
                count++;
            }
        }

        printf("您输入的数字 %d 在数组中出现了 %d 次\n", num, count);
    }

    return 0;
}