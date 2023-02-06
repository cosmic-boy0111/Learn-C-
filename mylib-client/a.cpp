#include<cstdio>
#include "b.h"


int main() {
	int result = Add(1, 2);
	printf("Result = %d\n", result);
	printf("PI = %lf\n", PI);
}

/*
* commands shell to build static library:
*	cl /c b.cpp -> b.obj
*	lib b.obj -> b.lib
* 
* to build executable:
	cl /c a.cpp -> makes a.obj file
	link a.obj b.lib -> makes a.exe file

	to show option link /?

to change name:
	link a.obj b.lib /OUT:<filename>.exe
*/