#include <stdio.h>

int main() {

    int  a = 1;
    char c = 'a';

    char result = a + c;
    printf("result = %c\n", result);

    printf("%d\n", &result);
    printf("%#X\n", &result);

    return 0;
}