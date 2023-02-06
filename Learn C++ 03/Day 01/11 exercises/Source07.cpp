#include<iostream>

using namespace std;

int main() {

	int u = 0, a = 0, t = 0;
	cout << "input intital velocity : ";
	cin >> u;
	cout << "input accelaration : ";
	cin >> a;
	cout << "input time : ";
	cin >> t;

	cout << "final velocity  : " << u + (a * t) << " m/s" << endl;

}