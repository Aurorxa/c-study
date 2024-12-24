#include <stdio.h>
#include <stdlib.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 打开文件流
    FILE *file = fopen("./file1.txt", "r");

    if (file == NULL) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    int chs;
    while ((chs = fgetc(file)) != EOF) {
        putchar(chs);
    }

    // 关闭文件流
    fclose(file);

    return 0;
}
