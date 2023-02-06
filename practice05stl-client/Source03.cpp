#include <assert.h>
#include "practice05.h"


int main() {
    DayNumber result = Sun;
    result = dow(12, 9, 2020);
    assert(result == 6);
}
