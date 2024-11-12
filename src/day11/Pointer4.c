#include <stdio.h>

/**
 * 交换 p1 和 p2 指向的变量的值
 * @param p1
 * @param p2
 */
void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1      = *p2;
    *p2      = temp;
}
/**
 * 定义两个变量，要求交换两个变量中记录的值
 *
 * 注意：交换的代码需要写在函数 swap 中
 */
int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int num1 = 10;
    int num2 = 20;

    printf("调用前: num1 = %d, num2 = %d\n", num1, num2); // 调用前: num1 = 10, num2 = 20

    swap(&num1, &num2);

    printf("调用后: num1 = %d, num2 = %d\n", num1, num2); // 调用后: num1 = 20, num2 = 10

    return 0;
}