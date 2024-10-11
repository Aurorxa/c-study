#include <stdio.h>

/**
 * 声明员工的结构体
 */
struct Employee {
    int  id;          // 员工编号
    char name[20];    // 员工姓名
    char gender;      // 员工性别
    int  age;         // 员工年龄
    char address[30]; // 员工住址
};

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 定义员工结构体的变量
    struct Employee employee;

    return 0;
}