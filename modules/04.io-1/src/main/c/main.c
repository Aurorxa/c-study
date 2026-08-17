#include <inttypes.h>
#include <stdio.h>

#include "c_study.h"
/*
 * printf 的作用：
 *  将参数文本输出到屏幕，f 是 format 的缩写，表示可以定制输出文本的格式。
 * 格式如下：
 *  printf("FORMAT", 参数列表);
 * 【注意】printf 不会在行尾自动添加换行符，需要手动添加 \n 来实现换行。
 */
int main() {
    /*
     *基本用法
     */
    printf("Hello, World!\n"); // Hello, World!
    /*
     * 如果文本内部有换行，则需要使用 \n 来实现换行
     */
    printf("Hello, \nWorld!\n"); // Hello,
                                 // World!

    printf_ln();

    /*
     * printf 中可以使用 %? 来表示占位符，就是表示该位置需要使用参数来替换，如下所示：
     * %d 表示整数
     * %f 表示浮点数
     * %s 表示字符串
     * %c 表示字符
     * %p 表示指针
     * %% 表示百分号
     */
    printf("%d\n", 10);              // 10
    printf("%f\n", 10.0);            // 10.000000
    printf("%s\n", "Hello, World!"); // Hello, World!
    printf("%c\n", 'A');             // A
    int a = 10;
    printf("0x%" PRIxPTR "\n", (uintptr_t)(void *)&a); // 0xe30ef6fcc8（地址可能不同）
    printf("%%\n");                                    // %
    return 0;
}
