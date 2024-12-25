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

    if (dest == NULL) {
        fprintf(stderr, "Error: Failed to open file.\n");
        exit(EXIT_FAILURE);
    }

    // ② 读写文件（统计、转换、加密、解密...）

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), src) != NULL) {
        if (fputs(buffer, dest) == EOF) { // 写入目标文件
            perror("Error writing to output file");
            exit(EXIT_FAILURE);
        }
    }

    printf("文件复制成功！");

    // ③ 关闭文件流
    fclose(src);
    fclose(dest);

    return 0;
}
