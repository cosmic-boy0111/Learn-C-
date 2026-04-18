#include "Circle.h"

int main() {
	Circle a = 5;
	double area = 0.0;

	area = a.GetArea();
	area = a.GetArea();

	a.SetRadius(10);
	area = a.GetArea();
	area = a.GetArea();
}

/*
- we can modify the menber variable if we define them with the mutable tag
- with the help of const function.
*/
