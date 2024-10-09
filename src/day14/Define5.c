#include <stdio.h>

#if _WIN32 // 如果是windows平台, 就引入 <windows.h>
#include <windows.h>
#define SLEEP(t) Sleep(t * 1000)
#elif __linux__ // 如果是linux平台， 就引入<unistd.h>
#include <unistd.h>
#define SLEEP sleep
#endif

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    SLEEP(5);
    printf("hello, 大家好~");

    return 0;
}