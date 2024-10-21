#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// 线程执行的函数
void *thread_function(void *arg) {
    int thread_num = *(int *)arg; // 获取线程编号
    printf("线程 %d 正在运行...\n", thread_num);

    // 模拟一些工作
    for (int i = 0; i < 5; i++) {
        printf("线程 %d 计数：%d\n", thread_num, i);
    }

    printf("线程 %d 结束。\n", thread_num);
    return NULL; // 线程返回值
}

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    pthread_t thread1, thread2; // 定义两个线程ID
    int       thread_num1 = 1;
    int       thread_num2 = 2;

    // 创建第一个线程
    if (pthread_create(&thread1, NULL, thread_function, &thread_num1) != 0) {
        perror("创建线程1失败");
        return 1;
    }

    // 创建第二个线程
    if (pthread_create(&thread2, NULL, thread_function, &thread_num2) != 0) {
        perror("创建线程2失败");
        return 1;
    }

    // 等待两个线程结束
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("主线程结束。\n");
    
    return 0;
}