class Base {
public:
	void f() {

	}
};

class Derived : public Base {
public:
	void f() {

	}
};

int main() {
	Base base;
	Derived derived;

	Base* pbase = nullptr;
	Derived* pderived = nullptr;

	pbase = &base;
	pbase->f(); // Base::f()

	pderived = &derived;
	pderived->f(); // Derived::f()

	pbase = &derived;
	pbase->f(); // Base::f();
	// as we know the base pointer the base part of the derived class
	// so it is obious the it going to execute the base function 
}
