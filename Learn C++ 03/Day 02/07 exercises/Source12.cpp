#include <iostream>
#include <string>

using namespace std;

int main() {

	int n = 0;
	cout << "Enter a number : ";
	cin >> n;

	string s = to_string(n);

	cout << "Sum of last two digits : " << (s[0]-'0') + (s[s.size() - 1]-'0');

}