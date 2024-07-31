#include <stddef.h>
#include <stdio.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int num = 10;
    printf("num = %d \n", num);

    int *p = &num;
    printf("p = %p \n", p);

    char c = 'A';
    printf("c = %c \n", c);

    char *pc = &c;
    printf("pc = %p \n", pc);
    
    return 0;
}