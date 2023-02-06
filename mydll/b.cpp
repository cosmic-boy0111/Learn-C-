// #define B_EXPORTS
#include "b.h"
const double PI = 3.14;
int Add(int u, int v) {
	return u + v;
}

/*
* __declspec(dllexport) is know as decorator
* the symbol on which _declspec(dllexport) is written , such symbol is exported from the DLL.
* for symbol to be aceessible from other modules, it ha to be exported from DLL.
* symbols which are not written in _declspec(dllexport) are called as private symbols.
* usually private symbols are written in help exported symbols
*/