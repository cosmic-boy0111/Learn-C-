#include <iostream>
#include <assert.h>

struct Circle {
    double radius;
};

double CalculateArea(const Circle &c) {
    return c.radius*c.radius * 3.14;
}

int main() {
    Circle c{ 10 };
    double area = CalculateArea(c);
    assert(area == 314);
    std::cout << "Area of circle of radius " << c.radius
        << " is " << area << std::endl;
}
