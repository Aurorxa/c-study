#include <stdio.h>

bool getMod(int num1, int num2, int *res) {
    if (num2 == 0) {
        return false;
    }
    *res = num1 % num2;
    return true;
}

/**
 * 定义一个函数，将两个数相除，求它们的余数
 *
 */
int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int num1 = 10;
    int num2 = 3;

    int res = 0;

    bool ret = getMod(num1, num2, &res);
    if (ret) {
        printf("%d %% %d = %d\n", num1, num2, res);
        
    } else {
        printf("除数不能为 0\n");
    }

    return 0;
}