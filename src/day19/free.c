#include <stdio.h>
#include <stdlib.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int *p = (int *)malloc(sizeof(int) * 10);

    if (p == NULL) {
        printf("malloc failed\n");
        exit(1);
    }

    for (int i = 0; i < 10; i++) {
        p[i] = i;
        printf("%d ", p[i]);
    }

    free(p);
    free(p);

    return 0;
}
