#include <stdio.h>

int main(void) {

    // 初始化
    int n = 10;

    // 在同一作用域内定义两个同名变量会导致编译报错。
    int n = 10;

    return 0;
}