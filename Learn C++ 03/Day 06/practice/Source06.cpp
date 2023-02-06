//Write a program to calculate the factorial of a given number using pointers.
//Sample Output :
//Input a number : 5
//The Factorial of 5 is : 120

#include <iostream>
using namespace std;


int main() {
	int num = 0;
	cout << "Enter a number : ";
	cin >> num;

	int ans = 1;
	int* ptr = &ans;
	for (int i = 2; i <= num; i++) {
		*ptr = *ptr * i;
	}

	cout << "The Factorial of " << num << " is : " << ans << endl;

}
