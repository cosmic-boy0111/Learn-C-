#include <iostream>
#include <math.h>

struct Triangle {
    struct Value{
        double value;
    };
    struct Angle {
        double value;
    };
    Value a;
    Value b;
    Value c;
    Angle A;
    Angle B;
    Angle C;
};


bool SidesFormTriangle(const Triangle& t)
{
    if (t.a.value + t.b.value <= t.c.value || 
        t.a.value + t.c.value <= t.b.value || 
        t.b.value + t.c.value <= t.a.value)
        return 0;
    else
        return 1;
}

void ComputeAnglesFromSides(Triangle& t) {
       
    double a = t.a.value;
    double b = t.b.value;
    double c = t.c.value;

    t.A.value = acos(((b*b + c*c) - a*a) / (2*b*c)) ;
    t.B.value = acos(((c*c + a*a) - b*b) / (2*a*c)) ;
    t.C.value = acos(((b*b + a*a) - c*c) / (2*b*a)) ;

}

int main() {
    Triangle t;
    std::cout << "Input the lengths of three sides (a, b, c) of a triangle:" << std::endl;
    std::cout << "Input length of side a: " << std::flush;
    std::cin >> t.a.value;
    std::cout << "Input length of side b: " << std::flush;
    std::cin >> t.b.value;
    std::cout << "Input length of side c: " << std::flush;
    std::cin >> t.c.value;
    if (SidesFormTriangle(t)) {
        ComputeAnglesFromSides(t);
        std::cout << "Measure of Angle A is " << t.A.value << std::endl;
        std::cout << "Measure of Angle B is " << t.B.value << std::endl;
        std::cout << "Measure of Angle C is " << t.C.value << std::endl;
    }
    else {
        std::cout << "Given lengths of sides cannot form a triangle." << std::endl;
    }
}
