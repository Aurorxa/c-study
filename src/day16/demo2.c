#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int   chinese, math, english;
    float average;

    printf("请输入语文成绩：");
    scanf("%d", &chinese);

    printf("请输入数学成绩：");
    scanf("%d", &math);

    printf("请输入英语成绩：");
    scanf("%d", &english);

    average = (chinese + math + english) / 3.0;
    printf("平均成绩为：%.2f\n", average);

    return 0;
}