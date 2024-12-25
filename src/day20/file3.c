#include <stdio.h>
#include <stdlib.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // ① 打开文件流
    FILE *src = fopen("/root/file1.txt", "a+");
    FILE *dest = fopen("/root/file2.txt", "a+");

    if (src == NULL) {
        fprintf(stderr, "Error: Failed to open file.\n");
        exit(EXIT_FAILURE);
    }

    // ② 读写文件（统计、转换、加密、解密...）
    int chs;
    while ((chs = fgetc(src)) != EOF) {
        if (fputc(chs, dest) == EOF) {
            fprintf(stderr, "Error: Failed to write to file.\n");
            exit(EXIT_FAILURE);
        }
    }

    printf("文件复制成功！");

    // ③ 关闭文件流
    fclose(src);
    fclose(dest);

    return 0;
}
