#include<iostream>
using namespace std;

int main() {

	int number = 0;
	cout << "Entre a Number : ";
	cin >> number;

	cout << "First 10 NUmbers of fibo series are : " << endl;
	int n1 = 0;
	int n2 = 1;
	int i = 10;
	while (i--)
	{
		cout << n1 << " ";
		int temp = n2;
		n2 = n1 + n2;
		n1 = temp;
	}

}