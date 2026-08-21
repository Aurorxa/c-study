#include "test.h"

#include <assert.h>

#include "game-outer.h"

bool test_random() {
    assert(random(1, 10) >= 1 && random(1, 10) <= 10);
    assert(random(1, 10) >= 1 && random(1, 10) <= 10);
    assert(random(1, 10) >= 1 && random(1, 10) <= 10);
    assert(random(1, 10) >= 1 && random(1, 10) <= 10);
    assert(random(1, 10) >= 1 && random(1, 10) <= 10);
    assert(random(1, 10) >= 1 && random(1, 10) <= 10);
    assert(random(1, 10) >= 1 && random(1, 10) <= 10);
    return true;
}
