//Write a program to count the number of vowelsand consonants in a string using a pointer.
//Sample Output :
//Input a string : Hello, World
//Number of vowels : 3
//Number of consonants : 7


#include <iostream>
#include <string>
using namespace std;


string lower(string str) {
	string ans = "";
	for (auto& x : str) {
		if (x >= 'A' and x <= 'Z') {
			ans.push_back(static_cast<char>(x + 32));
			continue;
		}
		ans.push_back(x);
	}

	return ans;
}

int main() {

	string s = "";
	cout << "enter a string : ";
	getline(cin, s);

	s = lower(s);

	int vowels = 0;
	int consonants = 0;

	char* p = &s[0];
	while (*p != '\0')
	{
		char c = *p;
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			vowels++;
		}
		else if(c >= 'a' and c <= 'z') {
			consonants++;
		}
		p++;
	}

	cout << "Number of vowels : " << vowels << endl;
	cout << "Number of consonants : " << consonants << endl;
	

}
