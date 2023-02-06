#include<iostream>
using namespace std;

int main() {

	int number = 0;
	cout << "Enter a number : ";
	cin >> number;
	int sum = 0;
	while (number)
	{
		sum += number % 10;
		number = number / 10;
	}

	cout << "Sum of digits of " << number << " is : " << sum << endl;

}