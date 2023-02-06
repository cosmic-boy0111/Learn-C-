#include<iostream>
#include<string>
#include <vector>

using namespace std;


int main() {

	string str = "";
	cout << "Enter a string : ";
	getline(cin, str);

	if (str[0] >= 'a' && str[0] <= 'z') str[0] = static_cast<char>(str[0] - 32);
	for (int i = 1; i < str.size(); i++) {
		if (str[i] == ' ' and i+1 < str.size() and str[i+1] >= 'a' && str[i+1] <= 'z') {
			str[i+1] = static_cast<char>(str[i+1] - 32);
		}
	}

	cout << "Converted String is : " << str << endl;

}