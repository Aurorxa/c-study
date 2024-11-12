#include <stdio.h>

int main() {

    int i = 1;
    int j = 10;
    if (i || j++ > 0) {
        printf("床前明月光 \n");
    } else {
        printf("我叫郭德纲 \n"); // 这行代码不会被执行
    }
    printf("%d\n", j); //10

    return 0;
}