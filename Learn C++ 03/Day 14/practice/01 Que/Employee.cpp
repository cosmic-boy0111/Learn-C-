#include "Employee.h"
#include <stdexcept>

using namespace std;

Employee::Employee(const char* pname, int age, const char* pdepartment) : Person(pname, age) {
	SetDepartment(pdepartment);
}

Employee::Employee(const Employee& obj) : Person(obj) {
	SetDepartment(obj.m_department);
};

Employee Employee::operator=(const Employee& obj) {
	if (this == &obj) return *this;
	const Person* person1 = this;
	const Person* person2 = &obj;

	person1 = person2;

	if (m_department != nullptr) {
		delete[] m_department;
		m_department = nullptr;
	}

	SetDepartment(obj.m_department);

	return *this;
}

Employee::~Employee() {
	delete[] m_department;
	m_department = nullptr;
}

const char* Employee::GetDepartment() const {
	return m_department;
}

void Employee::SetDepartment(const char* pdepartment) {
	if (pdepartment == nullptr) {
		throw invalid_argument("Invalid Age");
	}

	int size = strlen(pdepartment);
	m_department = new char[size + 1];
	strcpy_s(m_department, size + 1, pdepartment);

}