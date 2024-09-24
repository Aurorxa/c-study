#include <stddef.h>
#include <stdio.h>

#define BOOL_TO_STRING(x) ((x) ? "true" : "false")
int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int arr[3][4] = {
        {1, 2, 3, 4},
        {11, 22, 33, 44},
        {111, 222, 333, 444}};

    auto p  = arr;
    auto p2 = p + 1;
    auto p3 = p + 2;

    auto pp  = *arr;
    auto pp2 = *p;
    auto pp3 = *p2;

    return 0;
}