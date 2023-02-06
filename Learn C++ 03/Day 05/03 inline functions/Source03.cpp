#include "add.h"

int main() {
	int result = 0;
	result = 3 + 5; // inline
	result = add(1, 2); // not inline
}

/*
* if function sis inline its declaration and definition must be is stored in header file.
	Not keeping inline function definition in header file will result into linking error
* if function is non-inline the only declaration must be strore in header file.
	Definition must be stored in a seperate implementation file
* Non-inline function definition is stored in separate implementation file. 
	Header contains only declaration.
	keeping definition in header file will result in linking error.
*/