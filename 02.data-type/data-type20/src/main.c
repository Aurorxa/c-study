#include <stdio.h>

static void print(int arr[], int sz) { // 函数的大括号中的代码也构成复合语句

    int i = 0;
    for (i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int i = 0;
    
    int arr[10] = {0};

    for (i = 0; i < 10; i++) { // for循环的循环体的大括号中的就是复合语句
        arr[i] = 10 - i;
        printf("%d\n", arr[i]);
    }
    return 0;
}