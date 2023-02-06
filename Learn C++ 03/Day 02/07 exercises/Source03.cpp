#include<iostream>

using namespace std;


int main() {

	double r1 = 0, r2 = 0, r3 = 0;
	cout << "Enter resistance R1 R2 R3 : ";
	cin >> r1 >> r2 >> r3;
	double ans = 1 / (1 / r1 + 1 / r2 + 1 / r3);

	cout << "Effective resistane is : " << ans << " ohms" << endl;

}