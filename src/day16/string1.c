#include <stdio.h>
#include <string.h>

void find_str(char const *str, char const *substr) {
    char const *pos = strstr(str, substr);
    pos ? printf("找到字符串 [%s] 位于 [%s] 的位置 %td\n",
                 substr, str, pos - str)
        : printf("没有在 [%s] 中找到 [%s]\n",
                 str, substr);
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    char const *str = "one two three";
    find_str(str, "two");
    find_str(str, "");
    find_str(str, "nine");
    find_str(str, "n");

    return 0;
}
