#include <stdio.h>

int main() {

    int res1 = 10 % 3;
    printf("10 %% 3 = %d\n", res1); // 10 % 3 = 1

    int res2 = -10 % 3;
    printf("-10 %% 3 = %d\n", res2); // -10 % 3 = -1

    int res3 = 10 % -3;
    printf("10 %% -3 = %d\n", res3); // 10 % -3 = 1

    int res4 = -10 % -3;
    printf("-10 %% -3 = %d\n", res4); // -10 % -3 = -1

    return 0;
}