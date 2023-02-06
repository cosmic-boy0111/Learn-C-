//Write a ucm function to calculate the centrifugal forceand tangential 
//velocity from the angular rate.Formulas to use are 
//v = (omega)2(pi)r and F = m(v^2) / r.Test your ucm function with the following
//testing code.
#include <assert.h>
#include <cmath>

void ucm(double m, double r, double omega, double& f, double& v) {
    f = m * pow(omega,2 ) * r;

    v = sqrt((f * r) / m);

}

int main() {
    double m = 7.26, r = 2, omega = 2;
    double f = 0.0, v = 0.0;
    ucm(m, r, omega, f, v);
    assert(f == 58.08 && v == 4);
}
