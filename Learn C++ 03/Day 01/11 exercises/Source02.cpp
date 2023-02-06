#include<iostream>
#include<math.h>
using namespace std;

int main() {

	double radious = 0.0;
	cout << "Enter a radious of sphere : ";
	cin >> radious;

	double volume = (4 * 3.14 * (pow(radious,3)))/3.0;

	cout << "volume of spere : " << volume << endl;

}