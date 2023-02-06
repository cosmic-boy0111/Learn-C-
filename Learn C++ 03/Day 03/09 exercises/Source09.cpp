#include<iostream>
#include<string>
using namespace std;

int main() {

	string str = "";
	cout << "Enter a string : ";
	getline(cin, str);

	string ans = "";
	string temp = "";
	bool isFirst = true;
	for (int i = 0; i < str.size(); i++) {
		if((str[i] >= 'a' and str[i] <= 'z') || (str[i] >= 'A' and str[i] <= 'Z')) {
			ans.push_back(str[i]);
			isFirst = true;
		}
		else if(isFirst) {
			isFirst = false;
			ans.append(temp + ' ');
			temp = "";
		}
	}

	cout << "Converted string is : " << ans;


}