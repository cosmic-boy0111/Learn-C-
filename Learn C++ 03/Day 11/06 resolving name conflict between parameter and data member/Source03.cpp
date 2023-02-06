#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

class Circle {
private:
	int radius;
public:
	int GetRadius() {
		assert(radius > 0);
		return radius;
	}

	void SetRadius(int radius) {
		if (radius <= 0)
			throw invalid_argument("Radius must be positive number.");
		Circle::radius = radius;
	}
public:
	void Print() {
		cout << GetRadius() << endl;
	}
};

int main() {
	Circle a;
	a.SetRadius(5);
	int r = a.GetRadius();
	a.Print();
	a.SetRadius(10);
	a.Print();
}

/*
* if data member and parameter happend to be of the same name then the class name can be used to
  distinguish data member from parameter
*/