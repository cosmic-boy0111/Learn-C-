//Write a function cartesian_to_polar to convert coordinates given 
//in cartesian form to polar form.Test your cartesian_to_polar 
//function with the following testing code.Assume theta is to be in degree.
#include <assert.h>
#include <cmath>
#include<conio.h>

void cartesian_to_polar(double x, double y, double& r, double& theta){

    r = sqrt(pow(x, 2) + pow(y, 2));
    theta = atan(y / x) * (180 / 3.142);
    int p = static_cast<int>(theta * 10000);

}

int main() {
    double x = 3.0, y = 4.0;
    double r = 0.0, theta = 0.0;
    cartesian_to_polar(x, y, r, theta);
    assert(r == 5 && static_cast<int>(theta * 10000) == 531232);
}
