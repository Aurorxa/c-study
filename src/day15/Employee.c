#include <stdio.h>

/**
 * 声明日期的结构体
 */
struct Date {
    int year;
    int month;
    int day;
};

/**
 * 声明员工的结构体
 */
struct Employee {
    int         id;          // 员工编号
    char        name[20];    // 员工姓名
    char        gender;      // 员工性别
    int         age;         // 员工年龄
    char        address[30]; // 员工住址
    struct Date hireDate;    // 员工的入职时间
};

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 定义员工结构体的变量
    struct Employee employee = {1001, "张三", 'M', 20, "北京市海淀区", {2018, 10, 1}};

    printf("员工编号: %d\n", employee.id);
    printf("员工姓名: %s\n", employee.name);
    printf("员工性别: %c\n", employee.gender);
    printf("员工年龄: %d\n", employee.age);
    printf("员工住址: %s\n", employee.address);
    printf("入职时间: %d-%d-%d\n", employee.hireDate.year, employee.hireDate.month, employee.hireDate.day);

    printf("\n");

    // 定义员工结构体的变量
    struct Date     hireDate  = {2019, 10, 1};
    struct Employee employee2 = {.id = 1002, .name = "李四", .gender = 'F', .age = 21, .address = "上海市浦东新区"};
    employee2.hireDate        = hireDate;
    printf("员工编号: %d\n", employee2.id);
    printf("员工姓名: %s\n", employee2.name);
    printf("员工性别: %c\n", employee2.gender);
    printf("员工年龄: %d\n", employee2.age);
    printf("员工住址: %s\n", employee2.address);
    printf("入职时间: %d-%d-%d\n", employee2.hireDate.year, employee2.hireDate.month, employee2.hireDate.day);

    return 0;
}