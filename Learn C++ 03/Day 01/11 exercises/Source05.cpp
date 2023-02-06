#include<iostream>

using namespace std;

int main() {

	int n = 0;

	cout << "Enter a number : ";
	cin >> n;

	int ans = (n * (n + 1)) / 2;

	cout << "Sum up to " << n << " number is : " << ans << endl;

}