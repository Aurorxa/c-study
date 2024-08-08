#include <stdio.h>

/**
 * void 类型的指针变量
 *
 */
int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    // 定义两个整数变量
    int   num1 = 10;
    short num2 = 3;

    // 定义两个指针变量
    int   *ptr  = &num1;
    short *ptr2 = &num2;

    // 打印输出
    printf("num1 = %d\n", *ptr);
    printf("num2 = %d\n", *ptr2);

    /**
     * 不同类型的指针变量，是不能互相转换的。
     * 但是，void 类型的指针变量却可以打破上述的规则。
     * void 是没有任何类型的，就可以接受任意类型指针记录的内存地址。
     */

    void *p1 = ptr;
    void *p2 = ptr2;

    // 缺点：void 类型的指针，无法获取变量里面的值，也不能进行加、减计算
    //    printf("p1 = %d\n", *p1); // 错误

    return 0;
}