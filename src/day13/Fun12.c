#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    const int  a  = 10;
    const int  b  = 20;
    int *const p3 = &a;

    // p3 = &b; // 错误：不能改变 p3 的指向
    *p3 = 30; // 合法：可以修改 a 的值

    return 0;
}
