#include <iostream>
using namespace std;

struct Circle {
	int m_radius;

	void Print() {
		cout << m_radius << endl;
	}
};

int main() {
	Circle a = { 5 };
	a.Print();

	Circle b = { 10 };
	b.Print();
}

/*
- Note the 'this' pointer is implecitly added in c++ compiler.
	hence we can omit, mentioning it explicitly.
- form c++ compiler point of view 'cout << m_radius << endl;'statement os equivalent to 
	'cout << this->m_radius << endl;' statement.
*/