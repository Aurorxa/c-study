#include <stdio.h>

/**
 * 交换两个变量记录的数据
 * @param a void* 指针类型
 * @param b void* 指针类型
 * @param len 变量占据内存空间的大小
 */
void swap(void *a, void *b, int len) {
    char *ac = (char *)a;
    char *bc = (char *)b;

    for (int i = 0; i < len; ++i) {
        /* 一个字节一个字节的交换数据 */
        char temp = *ac;
        *ac       = *bc;
        *bc       = temp;
        /* 指针自增 */
        ac++;
        bc++;
    }
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    char a = 'a';
    char b = 'b';

    // 交换之前：a = a，b = b
    printf("交换之前：a = %c，b = %c\n", a, b);

    swap(&a, &b, sizeof(char));

    // 交换之后：a = b，b = a
    printf("交换之后：a = %c，b = %c\n", a, b);

    return 0;
}
