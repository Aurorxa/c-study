#include <stdio.h>

/**
 * 二分查找
 *
 * @param arr 数组
 * @param len 数组长度
 * @param num 要查找的数据
 * @return 返回数据的下标，没有找到返回-1
 */
int search(const int arr[], int len, int num) {
    int min = 0;
    int max = len - 1;
    while (min <= max) {
        int mid = (min + max) / 2;
        if (num < arr[mid]) { // 说明要查找的数据在左半边
            max = mid - 1;
        } else if (num > arr[mid]) { // 说明要查找的数据在右半边
            min = mid + 1;
        } else { // 说明找到了
            return mid;
        }
    }
    return -1;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};

    int len = sizeof(arr) / sizeof(arr[0]);

    int index = search(arr, len, -1);

    printf("index = %d\n", index);

    return 0;
}