//File compression : Write a program that reads a 
//text fileand compresses it using the Huffman coding algorithm.
//The program should use streams to readand write the file.
//The output should be the compressed file.

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream fin("dictionary.txt");
	if (!fin) {
		cout << "File not present : error at line " << __LINE__ << endl;
		return 0;
	}
	ofstream fout("updated_dict.txt", ios::out);
}
