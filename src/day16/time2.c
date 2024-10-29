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

    // 开始时间
    // 获取当前时间
    time_t t = time(NULL);

    // 使用 localtime() 转换时间戳为本地时间
    struct tm *local_time = localtime(&t);
    printf("本地时间: %s", asctime(local_time));

    // 使用 gmtime() 转换时间戳为 GMT 时间
    struct tm *gmt_time = gmtime(&t);
    printf("GMT时间: %s", asctime(gmt_time));
    return 0;
}
