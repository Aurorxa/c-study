#include <stdio.h>

int main(void) {

    /* 打印 ASCII 码表中的可见字符 */
    for (int i = 32; i < 127; i++) {
        printf("%c ", i);
    }

    return 0;
}