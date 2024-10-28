#include <stdio.h>

int main() {

    // 禁用 stdout 缓冲区
    setbuf(stdout, nullptr);

    int arr[] = {1, 2, 3};

    printf("arr 的首地址是: %p \n", arr);      // arr 的首地址是: 0x7ffd6c7be5fc
    printf("arr 的首地址是: %p \n", &arr);     // &arr 的地址是: 0x7ffd6c7be5fc
    printf("arr[0] 的地址是: %p \n", &arr[0]); // arr[0] 的地址是: 0x7ffd6c7be5fc
    printf("arr[1] 的地址是: %p \n", &arr[1]); // arr[1] 的地址是: 0x7ffd6c7be600
    printf("arr[2] 的地址是: %p \n", &arr[2]); // arr[2] 的地址是: 0x7ffd6c7be604

    return 0;
}
