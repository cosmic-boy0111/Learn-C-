//Write a count_vowel function that countsand returns count of each vowel(through “out parameters”) of a given string.Strictly no user input output from count_vowel function.
//Sample Input :
//Input string : Hello, World
//Sample Output :
//Count of ‘a’ is : 0
//Count of ‘e’ is : 1
//Count of ‘i’ is : 0
//Count of ‘o’ is : 2
//Count of ‘u’ is : 0


#include <iostream>
#include <string>


using namespace std;

int arr[27] = {0};


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

void count_vowel(string str) {
	str = lower(str);

	for (auto& x : str) {
		if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
			arr[x - 'a']++;
	}
}

int main() {

	string str = "";
	cout << "Enter a string : ";
	getline(cin, str);

	count_vowel(str);

	for (int i = 0; i < 26; i++) {
		char x = static_cast<char>('a' + i);
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
			cout << "Count of " << x << " : " << arr[i] << endl;
		}
	}

}
