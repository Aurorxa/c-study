#include <locale.h>
#include <stddef.h>
#include <stdio.h>
#include <wchar.h>

int main() {
    // 禁用 stdout 缓冲区
    setbuf(stdout, NULL);

    setlocale(LC_ALL, "");

    wchar_t t = L'中';

    wchar_t t2 = L'国';

    wprintf(L"%lc\n", t);
    wprintf(L"%lc\n", t2);

    return 0;
}