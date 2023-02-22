#pragma once
#include "Person.h"
class Employee : public Person {
public:
	Employee(const char* pname, int age, const char* pdepartment); 
	~Employee();
	Employee(const Employee& obj);
public:
	Employee operator=(const Employee& obj);
public:
	const char* GetDepartment() const; 
	void SetDepartment(const char* pdepartment); 
private:
	char* m_department;
};