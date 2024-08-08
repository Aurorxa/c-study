#include <stdio.h>

int search(const int arr[], int len, int num) {
    int min = 0;
    int max = len - 1;
    int mid = (min + max) / 2;
    while (min < max) {
        if (arr[mid] > num) { // 说明要查找的数据在左半边
            max = mid - 1;
        } else if (arr[mid] < num) { // 说明要查找的数据在右半边
            min = mid + 1;
        } else { // 说明找到了
            return mid;
        }
        mid = (min + max) / 2;
    }
    return -1;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};

    int len = sizeof(arr) / sizeof(arr[0]);

    int index = search(arr, len, 5);

    printf("index = %d\n", index);

    return 0;
}