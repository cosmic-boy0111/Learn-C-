#include <assert.h>
#include "practice05.h"

int main() {
    DayNumber result = Sun;
    result = dow(12, 9, 2020, Mon); // Mon as start of the week
    assert(result == 5); // Note change in the day number
}
