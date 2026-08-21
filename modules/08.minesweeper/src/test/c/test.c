#include "test.h"

#include <assert.h>

#include "game-outer.h"

bool test_random() {
    assert(random_in_range(1, 10) >= 1 && random_in_range(1, 10) <= 10);
    assert(random_in_range(1, 10) >= 1 && random_in_range(1, 10) <= 10);
    assert(random_in_range(1, 10) >= 1 && random_in_range(1, 10) <= 10);
    assert(random_in_range(1, 10) >= 1 && random_in_range(1, 10) <= 10);
    assert(random_in_range(1, 10) >= 1 && random_in_range(1, 10) <= 10);
    assert(random_in_range(1, 10) >= 1 && random_in_range(1, 10) <= 10);
    assert(random_in_range(1, 10) >= 1 && random_in_range(1, 10) <= 10);
    return true;
}
