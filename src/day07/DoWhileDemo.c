#include <stdio.h>

int main() {

    int sum   = 0;
    int count = 0;

    int i = 1;
    do {
        if (i % 2 == 0) {
            sum += i;
            count++;
        }
        i++;
    } while (i <= 100);

    printf("1 ~ 100 中的所有偶数的和为: %d \n", sum);
    printf("1 ~ 100 中的所有偶数的个数为: %d \n", count);

    return 0;
}
