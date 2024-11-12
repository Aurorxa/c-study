#include <stdio.h>

int main() {

    // 定义二维数组，用于保存成绩
    double arr[3][5];

    // 获取二维数组的行数和列数
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    // 从控制台输入成绩
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("请输入第%d个班级的第%d个学生的成绩：", i + 1, j + 1);
            scanf("%lf", &arr[i][j]);
        }
    }

    // 总分
    double totalSum = 0;

    // 遍历数组，求总分和各个班级的平均分
    for (int i = 0; i < row; i++) {
        double sum = 0;
        for (int j = 0; j < col; j++) {
            totalSum += arr[i][j];
            sum += arr[i][j];
        }
        printf("第%d个班级的总分为：%.2lf\n", i + 1, sum);
        printf("第%d个班级的平均分为：%.2lf\n", i + 1, sum / col);
    }

    printf("所有班级的总分为：%.2lf\n", totalSum);
    printf("所有班级的平均分为：%.2lf\n", totalSum / (row * col));

    return 0;
}