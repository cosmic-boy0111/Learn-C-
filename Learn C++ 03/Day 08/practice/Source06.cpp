//Write a program that dynamically allocates enough memory space to store a 
//string such as “Hello”.It then increases the storage sufficiently high 
//enough to append the word such as
//“World” to the existing “Hello”.


#include <iostream>
#include <string.h>
using namespace std;

int main() {

	char* c = new char;
	cout << "Enter a string : ";
	gets_s(c,6);
	strcat_s(c, 13, " world");
	printf("%s", c);


}
