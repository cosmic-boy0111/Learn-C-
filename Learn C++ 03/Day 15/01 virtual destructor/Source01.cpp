#include <crtdbg.h>

class Base {
public:
	Base() {

	}
	~Base() {

	}
};

class Derived : public Base {
public:
	Derived() {

	}
	~Derived() {

	}
};

int main() {
	Base* pobj = nullptr; // Base()
	delete pobj; // ~Base();
	pobj = nullptr;
	_CrtDumpMemoryLeaks();
}

/*
- Expected is call to Base constructor upon creation of Base object and its happening.
- Expected is call to Base destructor upon deletion of Base object and its happening.
- Hence we conclude that above code is working OK.
*/
