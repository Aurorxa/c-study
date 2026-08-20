#include "add.h"
#include "calculator_expected.h"
#include "calculator_test.h"
#include "divide.h"
#include "modulo.h"
#include "mul.h"
#include "sub.h"

#include <assert.h>

void test_calculator(void) {
    assert(add(12, 5) == EXPECTED_ADD);
    assert(sub(12, 5) == EXPECTED_SUBTRACT);
    assert(mul(12, 5) == EXPECTED_MULTIPLY);
    assert(divide(12, 5) == EXPECTED_DIVIDE);
    assert(modulo(12, 5) == EXPECTED_REMAINDER);
}
