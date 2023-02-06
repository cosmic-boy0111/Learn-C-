#include<iostream>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i < n/2; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int n = 0;
	cout << "Enter a number : ";
	cin >> n;
	cout << "Entered Number is : " << isPrime(n) ? "Prime" : "not a Prime";
}