#include <iostream>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i < n / 2; i++) if (n % 2 == 0) return false;
	return true;
}

int main() {

	int n = 0;
	cout << "Input a positive integer : ";
	cin >> n;

	
	bool chk = true;
	for (int i = 2; i < n; i++) {
		if (isPrime(i) and isPrime(n-i)) {
			cout << n << " = " << i << " + " << n - i << endl;
			chk = false;
			break;
		}
	}

	if (chk) cout << "Number is not represented as sum of prime numbers" << endl;



}