#include <iostream>
using namespace std;

#define N 3

void print(int v[]);

void main() {
	int a[] = { 1, 2, 3 };
	print(a);

	int b[] = { 10, 20, 30, 40 };
	print(b);

	int c[] = { 100, 200 };
	print(c);
}

void print(int v[]) {
	size_t len = sizeof(v) / sizeof(int);
	for (size_t i = 0; i < len; i++) {
		cout << v[i] << " ";
	}cout << endl;
}

/*
- This is a bad design.
- The print function always iterates 3 times irrespective size of the array passed.
- Ideally, fuction should be flexible.
- It should perform that many number of iterations as many number of elements in an array.
*/