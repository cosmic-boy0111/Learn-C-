//Text searchand replace: Write a program that reads a text 
//fileand searches for a specified string.If the string is found, 
//the program should replace it with another specified string.
//The program should use streams to readand write the file.
//The output should display the number of occurrences of the 
//searched stringand the replaced string.

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream fin("dictionary.txt");
	if (!fin) {
		cout << "File is not present : ";
		return 0;
	}
	ofstream fout("updated_dict.txt", ios::out);
	string s1, s2;
	cout << "Enter replace string : ";
	cin >> s1;
	cout << "Enter replace with string : ";
	cin >> s2;

	string temp;
	int count = 0;
	while (fin >> temp){
		if (temp == s1) {
			temp = s2;
			count++;
		}
		fout << temp + " ";
	}

	cout << count << endl;

}