//Define a type that models a simple pendulum.
//Use the type to compute the period of the simple pendulum, 
//assuming that the angle of deflection is less than 15º.
//Google for the formula.

#include <iostream>
#include <cmath>

using namespace std;

struct Pendulum
{
	double length;
	double gravity;

};

double time_period(Pendulum p){
	return 2 * 3.14 * sqrt(p.length / p.gravity);
}

int main() {
	Pendulum p;
	cout << "Enter length : ";
	cin >> p.length;
	cout << "Enter gravity constant : ";
	cin >> p.gravity;

	cout << "Time Period : " << time_period(p);

}