#include "MeterConverter.h"

MeterConverter::MeterConverter(int m) {
    meter = m;
}
double MeterConverter::ToFoot() const {
    return 3.28084 * meter;
}
double MeterConverter::ToInch() const {
    return 39.37008 * meter;
}
double MeterConverter::ToMeter() const {
    return meter;
}
double MeterConverter::ToYard() const {
    return 1.0936133333333 * meter;
}
