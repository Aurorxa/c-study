#include <stdio.h>
/**
 *  定义结构体类型的同时，定义结构体数组
 */
struct Student {
    int   age;
    char *name;
};

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 声明结构体数组的时候，进行初始化
    struct Student stuArr[3] = {
        {.name = "Tom", .age = 18},
        {.name = "Jack", .age = 19},
        {.name = "Lucy", .age = 20}};

    // 访问结构体数组中的元素
    for (int i = 0; i < sizeof(stuArr) / sizeof(stuArr[0]); ++i) {
        printf("name = %s ，", stuArr[i].name);
        printf("age = %d \n", stuArr[i].age);
    }

    return 0;
}