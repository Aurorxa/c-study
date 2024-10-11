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

    // 定义结构体数组变量并赋值
    struct Student stuArr[5] = {
        {.id = 1000, .name = "张三", .age = 18, .gender = 'M', .address = "北京"},
        {.id = 1001, .name = "李四", .age = 19, .gender = 'M', .address = "上海"},
        {.id = 1002, .name = "王五", .age = 20, .gender = 'F', .address = "天津"},
        {.id = 1003, .name = "赵六", .age = 21, .gender = 'F', .address = "石家庄"},
        {.id = 1004, .name = "田七", .age = 22, .gender = 'F', .address = "河南"},
    };

    // 计算数组的长度
    int len = sizeof(stuArr) / sizeof(stuArr[0]);

    // 遍历结构体数组中的成员
    struct Student *p = stuArr;
    for (int i = 0; i < len; i++, p++) {
        printf("学号：%d\n", p->id);
        printf("姓名：%s\n", p->name);
        printf("性别：%c\n", p->gender);
        printf("年龄：%d\n", p->age);
        printf("地址：%s\n", p->address);
        printf("\n");
    }

    return 0;
}