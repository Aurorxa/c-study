#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 定义字符串指针数组
    char *strArr[] = {"Hello", "World"};

    // 计算字符穿指针数组的长度
    int len = sizeof(strArr) / sizeof(strArr[0]);

    // 打印字符串
    for (int i = 0; i < len; i++) {
        printf("%s\n", strArr[i]);
    }

    return 0;
}