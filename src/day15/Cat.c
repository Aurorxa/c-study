#include <stdio.h>

/**
 * 声明猫的结构体的同时，定义结构体数组
 */
struct Cat {
    char name[20];  // 姓名
    int  age;       // 年龄
    char color[50]; // 颜色
} catArr[2] = {{"Tom", 2, "white"}, {"Jack", 3, "black"}};

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 访问结构体数组中的元素
    for (int i = 0; i < sizeof(catArr) / sizeof(catArr[0]); ++i) {
        printf("name = %s ，", catArr[i].name);
        printf("age = %d ，", catArr[i].age);
        printf("color = %s \n", catArr[i].color);
    }

    return 0;
}