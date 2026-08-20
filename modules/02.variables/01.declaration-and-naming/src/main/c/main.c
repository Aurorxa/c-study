#include <stdio.h>

#include "c_study.h"

/*
 * 之前，我们已经学习了数据类型；那么，我们学习数据类型的目的，就是为了在程序中使用数据类型来描述变量。
 * 在 C 语言中，将经常变化的值称为变量，而不变的值称为常量。
 */
int main() {
    /*
     * 变量的创建语法：数据类型 变量名;
     * 变量的赋值语法：变量名 = 值;
     * 变量的初始化语法：数据类型 变量名 = 值;
     */
    int age = 18;
    printf("age = %d\n", age);

    /*
     * 变量的命名规则：
     * 1. 变量名可以由字母、数字、下划线组成，但不能以数字开头。
     * 2. 变量名不能包含空格。
     * 3. 变量名不能是 C 语言的关键字。
     */
    // int 1age = 18; // ❌️ 错误，变量名不能以数字开头
    // int _2b = 18; // ✅️ 正确，变量名可以包含下划线

    printf_separator();

    /*
     * 变量的命名，尽量使用有意义的名称，方便阅读和理解（见名知意）。
     */
    int age_of_student = 18;
    int student_age = 18;
    printf("age_of_student = %d\n", age_of_student);
    printf("student_age = %d\n", student_age);

    return 0;
}