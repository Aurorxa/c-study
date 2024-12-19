#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // list 是一个单链表，等于 NULL 说明是空链表
    Node *list = NULL;

    return 0;
}
