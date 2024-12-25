#include <stdio.h>
#include <stdlib.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // ① 打开文件流
    FILE *file = fopen("./file1.txt", "r");

    if (file == NULL) {
        fprintf(stderr, "Error: Failed to open file.\n");
        exit(EXIT_FAILURE);
    }

    printf("文件指针位置 --> start ：%ld\n", ftell(file));

    // ② 读写文件（统计、转换、加密、解密...）
    int chs;
    while ((chs = fgetc(file)) != EOF) {
        putchar(chs);
    }

    printf("\n文件指针位置 --> end  ：%ld\n", ftell(file));

    // ③ 关闭文件流
    fclose(file);

    return 0;
}
