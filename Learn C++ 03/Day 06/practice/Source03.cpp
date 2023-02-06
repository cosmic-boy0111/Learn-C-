//Write a program to find the larger number out of two numbers using a pointer.
//Sample Output :
//Input the first number : 7
//Input the second number : 2
//7 is the larger number.


#include <iostream>
using namespace std;

int Max(int* a, int* b) {
	return (*a) > (*b) ? (*a) : (*b);
}

int main() {

	int a = 0;
	int b = 0;
	cout << "Enter a first number : ";
	cin >> a;
	cout << "Enter a second number : ";
	cin >> b;
	int ans = Max(&a, &b);
	cout << "Largest number is : " << ans;

}