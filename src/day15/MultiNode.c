#include <stdio.h>

/**
 * 双链表结点定义
 */
struct Node {
    struct Node *prev; // 指向上一个节点的指针
    int          data; // 数据
    struct Node *next; // 指向下一个节点的指针
};

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    return 0;
}