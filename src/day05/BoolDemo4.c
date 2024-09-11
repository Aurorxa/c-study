#include <stdio.h>
#include <string.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    char input[10];
    bool handsome = false;

    printf("帅不帅[false 丑，true 帅]： ");
    scanf("%s", input); // 使用 %s 读取字符串

    // 将输入字符串转换为布尔值
    if (strcmp(input, "true") == 0) {
        handsome = true;
    } else if (strcmp(input, "false") == 0) {
        handsome = false;
    } else {
        printf("无效输入！\n");
        return 1;
    }

    if (handsome) {
        printf("你真的很帅！！！");
    } else {
        printf("你真的很丑！！！");
    }

    return 0;
}
