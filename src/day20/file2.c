#include <stdio.h>
#include <stdlib.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // ① 打开文件流
    FILE *file = fopen("/root/file1.txt", "a+");

    if (file == NULL) {
        fprintf(stderr, "Error: Failed to open file.\n");
        exit(EXIT_FAILURE);
    }

    printf("文件指针位置 --> start ：%ld\n", ftell(file));

    // ② 读写文件（统计、转换、加密、解密...）

    char *str = "hello world\n";

    while (*str) {
        if (fputc(*str, file) == EOF) { // 使用 fputc 写入字符
            perror("Error writing to file");
        }
        str++;
    }

    printf("文件指针位置 --> end  ：%ld\n", ftell(file));

    // ③ 关闭文件流
    fclose(file);

    return 0;
}
