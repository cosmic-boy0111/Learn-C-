//Word count : Write a program that reads a text 
//fileand counts the number of words in it.The program 
//should use streams to read the fileand count the words.
//The output should display the number of words in the file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("dictionary.txt");
	if (!fin) {
		cout << "File is not present : ";
		return 0;
	}
	ofstream fout("count.txt",ios::out);
	int count = 0;
	while (!fin.eof()){
		count++;
		string s;
		fin >> s;
	}
	fout << count;
	fout.close();
	fin.close();
}