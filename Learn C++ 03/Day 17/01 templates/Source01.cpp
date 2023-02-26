

#include <iostream>
using namespace std;

int IntCompare(int u, int v) { return (u < v ? -1 : (u > v ? 1 : 0)); }

class IntComparer {
public:
	int operator()(int u, int v) { return (u < v ? -1 : (u > v ? 1 : 0)); }
};

int dblCompare(double u, double v) { return (u < v ? -1 : (u > v ? 1 : 0)); }

class DblComparer {
public:
	int operator()(double u, double v) { return (u < v ? -1 : (u > v ? 1 : 0)); }
};

int main() {
	int a = 5, b = 2, result = 0;
	result = IntCompare(a, b);

	IntComparer intComparer;
	a = 6, b = 8;
	result = intComparer(a, b);

	double i = 1.0, j = 2.0;
	result = dblCompare(i, j);

	DblComparer dblcomparer;
	i = 3.0, j = 1.2;
	result = dblcomparer(i, j);

	return 0;
}