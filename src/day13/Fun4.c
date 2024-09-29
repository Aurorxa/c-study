#include <stdio.h>

/**
 * 求和
 * @param x 形参
 * @param y 形参
 * @return
 */
int add(int x, int y) {
    return x + y;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int a = 10;
    int b = 20;

    // a 和 b 是实参
    int result = add(a, b);

    printf("%d + %d = %d\n", a, b, result);

    return 0;
}
