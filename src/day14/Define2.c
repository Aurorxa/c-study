#include <stdio.h>

#define PI 3.1415926

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int r = 0;
    printf("请输入圆的半径：");
    scanf("%d", &r);

    double area = PI * r * r;
    printf("圆的面积为：%.2f\n", area);

    return 0;
}

// 取消宏定义
#undef PI
void func() {
    // printf("PI=%f", PI); // 错误,这里不能使用到PI了
}
