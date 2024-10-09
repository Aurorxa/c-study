#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

#if defined(_DEBUG)
    printf("正在使用 Debug 模式编译程序...\n");
#elif defined(NDEBUG)
    printf("正在使用 Release 模式编译程序...\n");
#elif defined(RELWITHDEBINFO)
    printf("正在使用 RelWithDebInfo 模式编译程序...\n");
#elif defined(_MINSIZEREL)
    printf("正在使用 Minsizerel 模式编译程序...\n");
#else
    printf("正在使用未知模式编译程序...\n");
#endif

    return 0;
}