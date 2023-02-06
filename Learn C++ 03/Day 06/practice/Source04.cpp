//Write a program to print all permutations of a given string using pointers.
//Sample Output :
//The permutations of the string are :
//abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  cbad  cbda  cabd  cadb  cdab  cdba  dbca  dbac  dcba  dcab  dacb  dabc


#include <iostream>

using namespace std;

void swap(char* c1, char* c2) {
	char temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

void permutation(string s,int start_index) {

	if (start_index == s.size()) {
		cout << s << " ";
		return;
	}

	for (int i = start_index; i < s.size(); i++) {
		swap(s[start_index], s[i]);
		permutation(s, start_index + 1);
		swap(s[start_index], s[i]);
	}

}

int main() {

	string s = "";
	cout << "Enter a string : ";
	cin >> s;

	permutation(s, 0);

}