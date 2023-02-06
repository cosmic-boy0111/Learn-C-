#include "practice05.h"
#include <assert.h>


int main() {
    int a[] = { 1, 2, 3, 4, 5, 3 };
    int size = 6;
    int result = findLargest(a, size);
    assert(result == 5);

}