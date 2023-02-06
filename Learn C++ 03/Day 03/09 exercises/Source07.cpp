#include<iostream>
#include<string>
using namespace std;


int main() {

	string str = "";
	cout << "Enter a string : ";
	getline(cin, str);

	int ans = 1;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ' ) {
			ans++;
		}
	}

	cout << "Words in String is : " << ans << endl;

}