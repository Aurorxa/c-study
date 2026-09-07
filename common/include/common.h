#ifndef COMMON_H
#define COMMON_H

#include <locale.h>
#include <stdio.h>

// 立即显示教学示例的输出，并采用当前平台的 UTF-8 locale。
void init_runtime(void);

#ifdef COMMON_IMPLEMENTATION
#if defined(__GNUC__) || defined(__clang__)
__attribute__((constructor))
#elif defined(_MSC_VER)
#pragma section(".CRT$XCU", read)
#endif
void init_runtime(void) {
  if (setvbuf(stdout, NULL, _IONBF, 0) != 0) {
    (void)fputs("warning: failed to disable stdout buffering\n", stderr);
  }

#ifdef _WIN32
  const char *locale_name = ".UTF-8";
#else
  const char *locale_name = "";
#endif

  if (setlocale(LC_ALL, locale_name) == NULL) {
    (void)fputs("warning: failed to configure the user locale\n", stderr);
  }
}

#if defined(_MSC_VER) && !defined(__clang__)
__declspec(allocate(".CRT$XCU"))
void (__cdecl * const init_runtime_initializer)(void) = init_runtime;
#endif
#endif

int add(int a, int b);
int sub(int a, int b);

#endif // COMMON_H
