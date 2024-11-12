#include <stdio.h>

/**
 * 声明人类的结构体
 */
struct Person {
    char   name[20]; // 姓名
    char   gender;   // 性别
    int    age;      // 年龄
    double weight;   // 体重
};

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 定义猫结构体的变量并进行初始化
    struct Person person = {.gender = 'M', .name = "张三", .age = 15, .weight = 60.5};

    // 结构体变量中成员的访问
    printf("姓名：%s\n", person.name);     // 姓名：张三
    printf("性别：%c\n", person.gender);   // 性别：M
    printf("年龄：%d\n", person.age);      // 年龄：20
    printf("体重：%.2f\n", person.weight); // 体重：60.50

    return 0;
}