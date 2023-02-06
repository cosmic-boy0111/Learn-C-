#include<iostream>

using namespace std;


int main() {

	double temp = 0.0;
	cout << "Enter tempreture in celcious : ";
	cin >> temp;

	cout << "Temperature in Fahrenheit : " << (temp * 9 / 5) + 32 << endl;

}