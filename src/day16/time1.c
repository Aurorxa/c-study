#include <stdio.h>
#include <time.h>

long sum(int num) {
    int i   = 0;
    int sum = 0;
    int j   = 0;
    for (i = 0; i < num; i++) {
        sum = 0;
        for (j = 0; j < 100; j++) {
            sum += j;
        }
    }
    return sum;
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    // 开始时间和结束时间
    time_t start, end;
    // 获取当前时间
    time(&start);

    // 执行一些需要测量时间的操作
    long result = sum(10000000);
    printf("result = %ld\n", result);

    // 获取当前时间
    time(&end);

    // 打印结果
    printf("开始时间是: %ld秒\n", start);
    printf("结束时间是: %ld秒\n", end);

    return 0;
}
