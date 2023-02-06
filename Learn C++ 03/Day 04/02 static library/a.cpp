#include<cstdio>

int Add(int u, int v);

int main() {

	int result = 0;
	result = Add(3, 2);
	printf("Result = %d\n", result);
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