#include <iostream>
using namespace std;

struct Dummy {};

int main() {
	Dummy dummy;
	cout << sizeof(Dummy) << endl;
	cout << sizeof(dummy) << endl;
}

/*
- can c program empty struct?
  N0. atleast one member must be present in the C struct.
- can c++ program have empty struct?
  Yes. The size of empty struct is 1 byte.
- Note this byte cannot be accessed.
- It is there to indicate presense of an object.
*/
