#include "practice06.h"
#include <iostream>
using namespace std;
//Address of a : 0x0019fee8
//Value of a : 10
//
//Now pa is assigned the address of a.
//Value of pa : 0x0019fee8
//Value of * pa : 10
//The value of a is changed to 34 now.
//Value of pa : 0x0019fedc
//Value of * pa : 34
//
//The pointer variable pa is assigned with the value 7 now.
//Address of a : 0x0019fee8
//Value of a : 7

int main() {
	int a = 10;
	cout << "Address of a : " << &a << endl;
	cout << "Value of a : " << a << endl;

	int* pa = &a;
	cout << "Value of pa : " << pa << endl;
	cout << "Value of *pa : " << *pa << endl;

	a = 34;
	cout << "Value of pa : " << pa << endl;
	cout << "Value of *pa : " << *pa << endl;

	*pa = 7;
	cout << "Address of a : " << &a << endl;
	cout << "Value of a : " << a << endl;



}