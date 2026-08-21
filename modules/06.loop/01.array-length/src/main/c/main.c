#include <stdio.h>

void test() {
    static int n = 10;
    n++;
    printf("%d ", n);
}

int main() {
    for (int i = 0; i < 10; i++) {
        test();
    }

    return 0;
}