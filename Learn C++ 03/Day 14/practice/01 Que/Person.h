#pragma once
#include <cstring>
#include <assert.h>

class Person {
public:
	Person(const char* pname, int age);
	Person(const Person& obj);
	~Person();
public:
	Person operator=(const Person& obj);
public:
	int GetAge() const;
	const char* GetName() const;
	void SetAge(int age); // age > 0 and age < m_maxAge
	void SetName(const char* pname); // pname != nullptr
private:
	char* m_pname;
	int m_age;
private:
	static int m_maxAge;
};

