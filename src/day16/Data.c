#include <stdio.h>

struct Person {
    char name[20];
    int  id;
    char gender;     // 性别 m->男 f->女
    char profession; // 职业 s->学生 t->老师
    union {
        float score;
        char  course[20];
    } sc; // sc 是一个共用体变量
};

#define TOTAL 5
int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 定义共用体变量并进行初始化
    struct Person persons[TOTAL];

    printf("----------请输入学生和老师的信息-----------\n\n");
    // 输入人员信息
    for (int i = 0; i < TOTAL; i++) {
        printf("请输入姓名：");
        scanf("%s", persons[i].name);
        printf("请输入编号：");
        scanf("%d", &(persons[i].id));
        printf("请输入性别：");
        scanf(" %c", &(persons[i].gender));
        printf("请输入职业：");
        scanf(" %c", &(persons[i].profession));
        if (persons[i].profession == 's') { // 如果是学生
            printf("请输入学生成绩：");
            scanf("%f", &persons[i].sc.score);
        } else { // 如果是老师
            printf("请输入老师课程：");
            scanf("%s", persons[i].sc.course);
        }
        printf("\n");
    }

    printf("----------学生和老师的信息，如下所示：-----------\n\n");

    // 输出人员信息
    for (int i = 0; i < TOTAL; i++) {
        printf("姓名：%s ", persons[i].name);
        printf("编号：%d ", persons[i].id);
        printf("性别：%c ", persons[i].gender);
        printf("职业：%c ", persons[i].profession);
        if (persons[i].profession == 's') { // 如果是学生
            printf("成绩：%f ", persons[i].sc.score);
        } else { // 如果是老师
            printf("课程：%s ", persons[i].sc.course);
        }

        printf("\n");
    }

    return 0;
}