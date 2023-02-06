#include <iostream>
using namespace std;

int main() {

	int n1 = 0, n2 = 0;
	cout << "Input 1st number for LCM : ";
	cin >> n1;
	cout << "Input 2nd number for LCM : ";
	cin >> n2;

	int k = n1 < n2 ? n1 : n2;
	int hcf = 1;
	for (int i = 1; i <= k; i++) {
		if (n1 % i == 0 and n2 % i == 0) {
			hcf = i;
		}
	}

	int lcm = (n1 * n2) / hcf;

	cout << "Lcm of two numbers is : " << lcm << endl;

}