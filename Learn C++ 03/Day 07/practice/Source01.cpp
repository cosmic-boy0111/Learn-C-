//Write an add function to add two numbers using pass by address.
//Sample Input :
//Input the first number : 7
//Input the second number : 2
//Sample Output :
//The sum of the entered numbers is : 9


#include <iostream>

using namespace std;

void add(int* a, int* b, int* c) {
	*c = *a + *b;
}

int main() {

	int a = 0, b = 0, c = 0;
	cout << "Enter a first number : ";
	cin >> a;
	cout << "Enter a second number : ";
	cin >> b;

	add(&a, &b, &c);

	cout << "The sum of the entered numbers is : " << c << endl;
}