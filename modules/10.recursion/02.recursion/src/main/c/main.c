#include <stdio.h>

static void test(int arr[]) {
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
    printf("%d\n", arr[5]);
    printf("%d\n", arr[6]);
    printf("%d\n", arr[7]);
    printf("%d\n", arr[8]);
    printf("%d\n", arr[9]);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    test(arr);
    return 0;
}
