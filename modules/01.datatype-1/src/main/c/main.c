#include <stdio.h>

#include "add.h"
#include "c_study.h"

int main() {
    /*
     * C 语言提供了丰富的数据类型来描述生活中的各种不同的数据，如：
     * 整数、浮点数、字符、字符串、数组、结构体、枚举、指针、函数等。
     *
     * 数据类型有两层含义：
     * 1. 限制数据的取值范围：描述数据的取值范围，如：int 是 4 个字节，而 short 是 2 个字节。
     * 2. 限制数据的种类：描述数据的种类，如：int 类型表示整数，float 类型表示浮点数。
     *
     * C 语言的数据类型可以分为两大类：
     * 1. 基本数据类型：包括整数、浮点数、字符、布尔值、字符串等。
     * 2. 派生数据类型：包括数组、结构体、枚举、指针、函数等。
     */
    int a = 10;
    char chs = 'A';
    float f = 3.14f;
    bool b = true;
    char *str = "Hello World";
    printf("%d, %c, %f, %d, %s\n", a, chs, f, b, str);

    return 0;
}