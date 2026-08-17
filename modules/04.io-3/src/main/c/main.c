#include <stdio.h>

/*
 * printf 默认情况下，只对负数显示 - 号，对整数不显示 + 号
 * 如果希望对整数也显示 + 号，可以使用 %+d 来指定
 */
int main() {
    printf("%+d\n", 123);  // +123
    printf("%d\n", -123);  // -123
    printf("%+d\n", -123); // -123
    return 0;
}
