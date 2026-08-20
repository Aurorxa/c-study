#include <stdio.h>

#include "c_study.h"
/**
 */
int main() {
    int arr[] = {0};
    printf("len: %zu\n", ARRAY_LENGTH(arr));
    printf("arr[0]: %d\n", arr[0]);
    return 0;
}
