#include <stdio.h>

bool equals(char *str1, char *str2) {
    // 1. 判断两个字符串是否为空
    if (str1 == nullptr || str2 == nullptr) {
        return false;
    }

    // 2. 判断两个字符串是否相等
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return false;
        }
        str1++;
        str2++;
    }

    return true;
}

/*
 * 已知正确的用户名和密码，需要用程序模拟用户登录。
 * 总共给 3 次机会，登录之后，给出相应的提示！！！
 * */
int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 定义机会的次数
    int count = 3;

    // 定义正确的用户名和密码
    char *rightUsername = "admin";
    char *rightPassword = "123456";

    while (count > 0) {
        char username[20] = {'\0'};
        printf("请输入用户名:");
        scanf("%s", username);
        char password[20] = {'\0'};
        printf("请输入密码:");
        scanf("%s", password);

        if (equals(username, rightUsername) && equals(password, rightPassword)) {
            break;
        }

        count--;

        if (count > 0) {
            printf("登录失败，您还有 %d 次机会！\n", count);
        }
    }

    if (count == 0) {
        printf("登录失败，您的账号已被锁定！\n");
    } else {
        printf("登录成功！\n");
    }

    return 0;
}