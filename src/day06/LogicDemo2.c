#include <stdio.h>

int main() {

    int i = 0;
    int j = 10;
    if (i && j++ > 0) {
        printf("床前明月光\n");
    } else {
        printf("我叫郭德纲\n");
    }
    printf("%d \n", j); //10

    return 0;
}