//Write a program to add two numbers using pointers.
//Sample Output :
//Input the first number : 7
//Input the second number : 2
//The sum of the entered numbers is : 9


#include <iostream>
using namespace std;

int Add(int* a, int* b) {
	return (*a) + (*b);
}

int main() {

	int a = 0;
	int b = 0;
	cout << "Enter first number : ";
	cin >> a;
	cout << "Enter second number : ";
	cin >> b;

	int sum = Add(&a, &b);
	cout << "Sum of the enterd number is : " << sum << endl;

}
