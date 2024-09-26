#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // ① 打开文件
    FILE *file = fopen("E:\\abc.txt", "r");
    if (file == NULL) {
        printf("文件不存在\n");
        return 1;
    } else {
        printf("文件已成功打开\n");
    }
    // ② 读取数据
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        printf("%c\n", ch);
    }
    // ③ 关闭文件
    fclose(file);

    return 0;
}
