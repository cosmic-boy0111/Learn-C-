#include<iostream>
using namespace std;

int main() {
	int n1 = 0, n2 = 0;
	cout << "Input the first number : ";
	cin >> n1;
	cout << "Input the second number : ";
	cin >> n2;
		
	while (n1 != n2) {
		if (n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}

	cout << "The Greatest Common Divisor is : " << n1 << endl;

}