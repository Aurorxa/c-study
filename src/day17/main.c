#include <stdio.h>

int *test() {

    static int num = 10;

    // 在函数中不要返回指向当前栈帧的指针！！！
    return &num;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int *p = test();

    printf("num = %d\n", *p);

    return 0;
}
