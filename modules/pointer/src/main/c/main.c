#include <inttypes.h>
#include <stdio.h>

int main() {
    int a = 10;
    printf("普通变量 a = %d\n", a);

    int *p = &a;
    printf("&a = 0x%" PRIxPTR "\n", (uintptr_t)&a);
    printf("p = 0x%" PRIxPTR "\n", (uintptr_t)p);
    printf("p 指针的大小 = %llu \n" , sizeof(p));

    return 0;
}
