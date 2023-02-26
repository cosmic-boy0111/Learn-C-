//Write a program that asks the user to enter a positive integerand
//then computes the factorial of that integer using a recursive function.
//If the user enters a negative number or a non - integer, 
//the program should throw an exception.

#include <iostream>
using namespace std;


class Exception {
public:
	Exception(int errorcode, const char* description, const char* pfunctionname, int lineno)
		: m_errorcode(errorcode), m_lineno(lineno) {
		strcpy_s(m_description, 64, description);
		strcpy_s(m_functionname, 64, pfunctionname);
	}
public:
	int GetErrorCode() const { return m_errorcode; }
	const char* GetDescription() const { return m_description; }
	const char* GetFunctionName() const { return m_functionname; }
	int GetLineNo() const { return m_lineno; }
private:
	int m_errorcode;
	char m_functionname[64];
	char m_description[64];
	int m_lineno;
};

class InvalidNumberException : public Exception {
public:
	InvalidNumberException(const char* pfunctionname, int lineno)
		: Exception(101, "Enter number is negative", pfunctionname, lineno) {}
};


int factorial(int number) {
	if (number < 0)
		throw InvalidNumberException(__FUNCTION__, __LINE__);
	if (number == 0) return 0;
	return number * factorial(number - 1);

}

int main() {
	try{
		int number = 0;
		cin >> number;
		int result = factorial(number);
		cout << "Factorial of the number is : " << result << endl;
	}catch (InvalidNumberException &e){
		cout << e.GetErrorCode() << endl;
		cout << e.GetDescription() << endl;
		cout << e.GetFunctionName() << endl;
		cout << e.GetLineNo() << endl;
	}catch (Exception& e) {
		cout << e.GetErrorCode() << endl;
		cout << e.GetDescription() << endl;
		cout << e.GetFunctionName() << endl;
		cout << e.GetLineNo() << endl;
	}

}