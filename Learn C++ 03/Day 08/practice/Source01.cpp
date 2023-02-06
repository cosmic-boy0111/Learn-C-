//Write a program to find the larger number out of the given two numbers using Dynamic Memory Allocation.
//Sample Output :
//Input the first number : 7
//Input the second number : 2
//7 is the larger number.


#include <iostream>
using namespace std;

int main() {

	int a = 0, b = 0;
	cout << "Enter a first number : ";
	cin >> a;
	cout << "Enter a second number : ";
	cin >> b;

	int* p1 = new int(a);
	int* p2 = new int(b);

	cout << "Largest Number is : ";
	if (*p1 > *p2) cout << *p1;
	else cout << *p2;

	delete p1;
	delete p2;

}