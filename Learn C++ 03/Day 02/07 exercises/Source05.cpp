#include<iostream>
using namespace std;

int fact(int n) {
	if (n == 0 || n == 1) return 1;
	return n * fact(n - 1);
}

int main() {
	int n = 0;
	cout << "Enter a NUmber : ";
	cin >> n;
	cout << "Factorial of " << n << " is : " << fact(n) << endl;

}