#include <stdio.h>

int main(void) {
    /*
     * sizeof 中表达式不计算
     *
     * sizeof 在代码进行编译的时候，就根据表达式的结果的类型，推到并确定了类型的长度，
     * 而表达式真要被执行，却要在程序运行期间才会发生，
     * 如果在编译期间已经将 sizeof 处理掉了，所以在运行期间就不会执行表达式了。
     */
    short s = 12;
    int b = 10;
    printf("%zu\n", sizeof(s = b + 1)); // 2
    printf("s = %d\n", s);              // s = 12

    return 0;
}
