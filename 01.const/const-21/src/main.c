#include <stdio.h>

int main(void) {
    /*
     * C 语言中打印布尔值通常使用 %d，因为底层它会被当作整数 0 或 1 输出。
     */
    printf("a && b = %d\n", true && false); // 输出 0 (false)
    printf("a || b = %d\n", true || false); // 输出 1 (true)
    printf("!a = %d\n", !true);             // 输出 0 (false)

    return 0;
}