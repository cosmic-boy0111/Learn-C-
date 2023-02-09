#pragma once
#include <assert.h>
#include <stdexcept>


class Complex {
private:
    int real;
    int imaginary;
public:
    Complex(int r = 0, int i = 0);
    int GetR() const;
    int GetI() const;
    Complex Add(Complex& obj) const;
    Complex Sub(Complex& obj) const;
    Complex Mul(Complex& obj) const;
    Complex Div(Complex& obj) const;
};