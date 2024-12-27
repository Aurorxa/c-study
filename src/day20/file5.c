#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // ① 打开文件流
    FILE *src_file = fopen("/root/西游记1.txt", "r");
    FILE *dest_file = fopen("/root/西游记2.txt", "w");

    if (src_file == NULL) {
        // fprintf(stderr, "error msg = %s", strerror(errno));
        perror("Error: 找不到 西游记1 文件");
        exit(EXIT_FAILURE);
    }

    if (dest_file == NULL) {
        fprintf(stderr, "Error: Failed to open file.\n");
        exit(EXIT_FAILURE);
    }

    // ② 读写文件（统计、转换、加密、解密...）
    char buffer[4096];
    size_t len;
    while ((len = fread(buffer, sizeof(char), sizeof(buffer), src_file)) > 0) {
        fwrite(buffer, sizeof(char), len, dest_file);
    }

    // ③ 关闭文件流
    fclose(src_file);
    fclose(dest_file);

    printf("文件复制成功！\n");

    return 0;
}
