#include <stdio.h>

/**
 * 声明猫的结构体
 */
struct Cat {
    char name[20];  // 姓名
    int  age;       // 年龄
    char color[50]; // 颜色
};

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 定义猫结构体的变量
    struct Cat cat;

    return 0;
}