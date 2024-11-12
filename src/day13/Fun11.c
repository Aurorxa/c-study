#include <stdarg.h>
#include <stdio.h>
/**
 * 获取平均值
 * @param count
 * @param ...
 * @return
 */
double avg(int count, ...) {
    // ① 声明一个 va_list 变量，该变量将保存遍历可变参数列表所需的信息。
    va_list args;
    // ② 初始化 va_list 变量，使其指向可变参数列表的第一个参数。
    va_start(args, count);
    // ③ 访问可变参数
    double sum = 0;
    for (int i = 0; i < count; i++) {
        /**
         * 1. 获取可变参数的类型和值
         * va_arg(args, int)：返回 args 中的下一个参数，该参数的类型为 int，
         * 并将 args 的位置指向参数列表中的下一个参数。
         * 2. 将获取到的参数值赋给 sum
         */
        sum += va_arg(args, int);
    }
    // ④ 清理 va_list 变量
    va_end(args);
    // 返回平均值
    return sum / count;
}

int main() {

    double avgValue = avg(5, 1, 2, 3, 4, 5);

    printf("avgValue = %.2f\n", avgValue);

    return 0;
}
