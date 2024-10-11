#include <stdio.h>

/**
 * 声明通讯录的结构体
 */
struct Contact {
    char name[50];        // 姓名
    int  year;            // 年
    int  month;           // 月
    int  day;             // 日
    char email[100];      // 电子邮箱
    char phoneNumber[15]; // 手机号
};

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 定义通讯录结构体的变量
    struct Contact contact;

    return 0;
}