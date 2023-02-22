#include "Person.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int  Person::m_maxAge = 120;

Person::Person(const char* pname, int age) {
	SetName(pname);
	SetAge(age);
}

Person::Person(const Person& obj) {
	SetName(obj.m_pname);
	SetAge(obj.m_age);
}

Person Person::operator=(const Person& obj) {

	if (m_pname != nullptr) {
		delete[] m_pname;
		m_pname = nullptr;
	}

	if (this == &obj)
		return *this;
	SetName(obj.m_pname);
	SetAge(obj.m_age);
	return *this;
}

int Person::GetAge() const {
	assert(!(m_age < 0 || m_age >= m_maxAge));
	return m_age;
}

const char* Person::GetName() const {
	return m_pname;
}

void Person::SetAge(int age) {
	// age > 0 and age < m_maxAge
	if (age < 0 || age >= m_maxAge) {
		throw invalid_argument("Invalid Age");
	}
	m_age = age;
}

void Person::SetName(const char* pname) {
	// pname != nullptr
	if (pname == nullptr) {
		throw invalid_argument("Invalid name");
	}

	int size = strlen(pname);
	m_pname = new char[size + 1];
	strcpy_s(m_pname, size + 1, pname);
}

Person::~Person() {
	delete[] m_pname;
	m_pname = nullptr;
}

