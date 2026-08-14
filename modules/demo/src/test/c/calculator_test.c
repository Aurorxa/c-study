#include "calculator.h"
#include "calculator_expected.h"
#include "calculator_test.h"

#include <assert.h>

void test_calculator(void) {
    assert(calculate(12, '+', 5) == EXPECTED_ADD);
    assert(calculate(12, '-', 5) == EXPECTED_SUBTRACT);
    assert(calculate(12, '*', 5) == EXPECTED_MULTIPLY);
    assert(calculate(12, '/', 5) == EXPECTED_DIVIDE);
    assert(calculate(12, '%', 5) == EXPECTED_REMAINDER);
}
