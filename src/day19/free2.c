#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10

typedef struct Student {
    int id;
    char name[20];
    int age;
} Student;

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 使用 malloc 函数在堆上申请内存，创建一个 10 个结构体变量
    // 如果成功，malloc 将会返回一个指向该内存的指针
    Student *p = (Student *)malloc(sizeof(Student) * LEN);

    // 检测分配是否成功
    if (p == NULL) {
        printf("malloc failed\n");
        exit(EXIT_FAILURE);
    }

    // malloc 并不会初始化内存空间，需要手动初始化
    for (int i = 0; i < 10; i++) {
        p[i].id = i;
        snprintf(p[i].name, sizeof(p[i].name), "C-%d", i); // 将 i 转为字符串
        p[i].age = i + 18;
    }

    // 输出结构体中的元素
    for (int i = 0; i < 10; i++) {
        printf("id=%d，姓名=%s，年龄=%d\n", p[i].id, p[i].name, p[i].age);
    }

    // 释放内存
    free(p);

    return 0;
}
