#include <stdio.h>

void demo(int num) {
    printf("num = %d\n", num);
}

void demo2(int num[]) {
    printf("数组的长度2 = %zu\n", sizeof(num));
}

int main() {

    int num = 10;
    demo(num);

    int num2[] = {1, 2, 3, 4, 5};
    printf("数组的长度1 = %zu\n", sizeof(num2));
    demo2(num2);

    return 0;
}