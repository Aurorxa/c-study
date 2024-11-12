#include <stdio.h>

void swap(int num1, int num2) {
    int temp = num1;
    num1     = num2;
    num2     = temp;
}
/**
 * 定义两个变量，要求交换两个变量中记录的值
 * 注意：交换的代码需要写在函数 swap 中
 */
int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int num1 = 10;
    int num2 = 20;

    printf("调用前: num1 = %d, num2 = %d\n", num1, num2); // 调用前: num1 = 10, num2 = 20
    
    swap(num1, num2);

    printf("调用后: num1 = %d, num2 = %d\n", num1, num2); // 调用后: num1 = 10, num2 = 20

    return 0;
}