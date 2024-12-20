#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

// 头插法
Node *insert_head(Node *list, int data) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("malloc failed\n");
        exit(1);
    }
    new_node->data = data;
    new_node->next = list;
    return new_node;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // list 是一个单链表，等于 NULL 就是空链表

    Node *list = NULL;

    list = insert_head(list, 5);
    list = insert_head(list, 4);
    list = insert_head(list, 3);
    list = insert_head(list, 2);
    list = insert_head(list, 1);

    printf("list: %d\n", list->data);

    return 0;
}
