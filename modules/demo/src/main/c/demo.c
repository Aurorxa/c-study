#include "demo.h"

#include "add.h"
#include "demo_config.h"
#include "divide.h"
#include "modulo.h"
#include "mul.h"
#include "sub.h"

#include <stdio.h>

void run_demo(void) {
    printf("12 + 5 = %d\n", add(DEMO_LEFT, DEMO_RIGHT));
    printf("12 - 5 = %d\n", sub(DEMO_LEFT, DEMO_RIGHT));
    printf("12 * 5 = %d\n", mul(DEMO_LEFT, DEMO_RIGHT));
    printf("12 / 5 = %d\n", divide(DEMO_LEFT, DEMO_RIGHT));
    printf("12 %% 5 = %d\n", modulo(DEMO_LEFT, DEMO_RIGHT));
}
