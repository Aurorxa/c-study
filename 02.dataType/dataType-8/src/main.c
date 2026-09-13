#include <stdio.h>

int main(void) {
    int a = 10;
    printf("%zu\n", sizeof(a)); // 4
    // sizeof 的操作数如果不是类型，是表达式的时候，可以省略掉后边的括号的。
    printf("%zu\n", sizeof a);        // 4
    printf("%zu\n", sizeof(int));     // 4
    printf("%zu\v", sizeof(3 + 3.5)); // 8

    return 0;
}
