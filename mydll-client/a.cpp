#include <cstdio>
#include "b.h"

int main() {

	int result = Add(1, 2);
	printf("Result = %d\n", result);
	//printf("PI = %lf\n", PI);

}

/*
* _declspec(dllimport) is know as decorator.
* the symbols on which _declspec(dllexport) is written. implies that the symbols is inported from some DLL.
*/

/*
* commands shell to build dynamic link library:
*	cl /c b.cpp -> b.obj
*	link /DLL b.obj -> b.lib b.exp b.dll
* 
* to build executable:
	cl /c a.cpp -> makes a.obj file
	link a.obj b.lib -> makes a.exe file

	to show option link /?

to change name:
	link a.obj b.lib /OUT:<filename>.exe
*/