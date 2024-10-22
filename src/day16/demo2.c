#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int  num1, num2;
    char ch;
    int  ret = scanf("%d %d %c", &num1, &num2, &ch);

    /*
        若键入的数据是 100 200 A，则正常匹配录入 3 个数据，ret 等于 3
        若键入的数据是 100 A 200，则正常匹配录入 1 个数据，ret 等于 1
        若键入的数据是 A 100 200，则正常匹配录入 0 个数据，ret 等于 0
    */
    printf("ret = %d\n", ret);

    return 0;
}