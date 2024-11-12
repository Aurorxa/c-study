#include <stdio.h>

int main() {

    for (int i = 0; i < 10; ++i) {
        if (i == 3) {
            break;
        }
        printf("%d \n", i);
    }

    printf("程序结束！\n");

    return 0;
}
