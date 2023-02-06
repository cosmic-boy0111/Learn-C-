#include <iostream>
#include <math.h>

using namespace std;


int main() {

	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;

	cout << "Enter poinit1 x1 y1 : ";
	cin >> x1 >> y1;
	cout << "Enter poinit1 x2 y2 : ";
	cin >> x2 >> y2;

	cout << sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

}