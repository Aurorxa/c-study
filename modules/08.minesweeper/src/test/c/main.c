#include <stdio.h>

#include "test.h"

int main() {
    if (test_random()) {
        printf("随机数生成器，测试通过");
    }
    return 0;
}