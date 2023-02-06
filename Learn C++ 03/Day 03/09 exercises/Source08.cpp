#include<iostream>
#include<string>
using namespace std;

int main() {

	string str = "";
	cout << "Enter a string : ";
	getline(cin, str);

	string ans = "";
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != ' ') {
			ans.push_back( tolower( str[i]));
		}
	}

	bool check = true;
	for (int i = 0; i < ans.size() / 2; i++) {
		if (ans[i] != ans[ans.size() - i - 1]) {
			check = false;
			break;
		}
	}

	cout << "String is " << (check ? "Palindrome" : "not Palindrome");

}