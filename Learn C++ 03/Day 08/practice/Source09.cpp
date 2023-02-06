// Write a convert function to convert seconds to hours minutes seconds.Test your convert function with the following testing code.
#include <assert.h>

void convert(int& hh, int& mm, int& ss) {
    hh = ss / 3600;
    ss = ss - (hh * 3600);
    mm = ss / 60;
    ss = ss - (mm * 60);
}

int main() {
    int hh = 0, mm = 0, ss = 1432;
    convert(hh, mm, ss);
    assert(hh == 0 && mm == 23 && ss == 52);
}
