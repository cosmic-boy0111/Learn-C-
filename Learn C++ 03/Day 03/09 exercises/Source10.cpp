#include<iostream>
#include<string>
using namespace std;

int main() {

	string str = "";
	cout << "Enter a string : ";
	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'a' and str[i] <= 'z') str[i] = static_cast<char>(str[i] - 32);
		else str[i] = static_cast<char>(str[i] + 32);
	}

	cout << "Converted string is : " << str;


}