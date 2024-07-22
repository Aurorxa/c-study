#include <stdio.h>

int main() {

    for (int i = 1; i <= 100; i++) {
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
            return 0;
        }
        printf("%d ", i);
    }

    printf("程序结束！\n");

    return 0;
}