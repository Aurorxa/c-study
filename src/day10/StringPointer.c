#include <stdio.h>
#include <time.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    int a = -10;

    time(NULL);

    return 0;
}