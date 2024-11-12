#include <stdio.h>

int main() {

    int x  = 12;
    int x1 = -x, x2 = +x;

    int y  = -67;
    int y1 = -y, y2 = +y;

    printf("x1=%d, x2=%d \n", x1, x2); // x1=-12, x2=12
    printf("y1=%d, y2=%d \n", y1, y2); // y1=67, y2=-67

    return 0;
}