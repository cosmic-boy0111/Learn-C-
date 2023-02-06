#include<iostream>
using namespace std;

int main() {

	int a = 0, n = 0, d = 0;

	cout << "Enter first number : ";
	cin >> a;
	cout << "Enter number of items : ";
	cin >> n;
	cout << "Enter common differene : ";
	cin >> d;

	int ans = (n * (2 * a + (n - 1) * d)) / 2;
	cout << "sum of A.P serries is : " << ans << endl;

}