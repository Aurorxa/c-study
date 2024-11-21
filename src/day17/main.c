#include <stdio.h>

/**
 * 前提：假设可以移动 n - 1 个盘子，如何移动 n 个盘子？
 * 递归公式：
 *  ① 先将 n - 1 个盘子移动到中间杆，即：A -->B
 *  ② 将最大的盘子移动到目标杆上，即：A --> C
 *  ③ 将中间杆上的盘子移动到目标杆上，即：B --> C
 * 边界条件：当 n = 1 时，只需要移动一次
 * @param n 汉诺塔的层数
 * @return 移动次数
 */
int hanoi(int n) {
    if (n == 1) {
        return 1;
    }
    return hanoi(n - 1) * 2 + 1;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int n;
    printf("请输入汉诺塔的层数：");
    scanf("%d", &n);

    // 计算移动次数
    // S(n) = S(n-1) --> 移动到中间杆
    //        + 1 --> 最大的移动到目标杆
    //        + S(n-1) --> 中间杆移动到目标杆
    printf("移动次数：%d\n", hanoi(n));

    return 0;
}
