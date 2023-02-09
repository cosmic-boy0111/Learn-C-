#pragma once
#include <assert.h>

// If difference between two real numbers is less than E
// it will be assumed that both real numbers are the same.
#define E 0.0100

class MeterConverter {
private:
    double meter;
public:
    MeterConverter(int m);
    double ToFoot() const;
    double ToInch() const;
    double ToMeter() const;
    double ToYard() const;

};