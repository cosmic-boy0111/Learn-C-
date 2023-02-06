//Write a program to calculate the length of the string using a pointer.
//Input a string : Hello, World
//Sample Output :
//The length of the given string is : 12


#include <iostream>
using namespace std;

#include <string>


int main() {

	string s = "";
	cout << "Enter a string : ";
	getline(cin, s);
	

	char* p = &s[0];
	int ans = 0;
	while (*p != '\0')
	{
		ans++;
		p++;
	}

	cout << "The length of the given string is : " << ans;

}