#include "Complex.h"

Complex::Complex(int r, int i) {
    real = r;
    imaginary = i;
}
int Complex::GetR() const {
    return real;
}
int Complex::GetI() const {
    return imaginary;
}
Complex Complex::Add(Complex& obj) const {
    return { real + obj.real , imaginary + obj.imaginary };
}
Complex Complex::Sub(Complex& obj) const {
    return { real - obj.real , imaginary - obj.imaginary };
}
Complex Complex::Mul(Complex& obj) const {
    int r = (real * obj.real) - (imaginary * obj.imaginary);
    int i = (real * obj.imaginary) + (imaginary * obj.real);
    return { r,i };
}
Complex Complex::Div(Complex& obj) const {
    int denominator = (obj.real * obj.real) + (obj.imaginary * obj.imaginary);
    if (denominator == 0)
        throw std::invalid_argument("denominator is 0 canot process infinite value");
    int numerator1 = (real * obj.real) + (imaginary * obj.imaginary);
    int numerator2 = (imaginary * obj.real) - (real * obj.imaginary);
    return { numerator1 / denominator, numerator2 / denominator };
}
