#include <assert.h>
#include "practice05.h"

int main() {
    bool palin = true;
    palin = palindrome(12321);
    assert(palin);

    palin = palindrome(102);
    assert(!palin);
}
