#include <stdio.h>


int main() {

    bool handsome = false;
    printf("帅不帅[false 丑，true 帅]： ");
    scanf("%d", &handsome);

    if (handsome) {
        printf("你真的很帅！！！");
    } else {
        printf("你真的很丑！！！");
    }

    return 0;
}
