#include <stdio.h>
/**
 * 声明学生的结构体
 */
struct Student {
    int  id;          // 学号
    char name[20];    // 姓名
    char gender;      // 性别
    int  age;         // 年龄
    char address[50]; // 地址
};

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 定义学生结构体的变量并进行初始化
    struct Student student = {10001, "张三", 'M', 20, "北京市海淀区"};

    // 输出结构体变量中成员的值
    printf("学号: %d\n", student.id);      // 学号: 10001
    printf("姓名: %s\n", student.name);    // 姓名: 张三
    printf("性别: %c\n", student.gender);  // 性别: M
    printf("年龄: %d\n", student.age);     // 年龄: 20
    printf("地址: %s\n", student.address); // 地址: 北京市海淀区

    return 0;
}