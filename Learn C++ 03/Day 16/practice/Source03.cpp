//Write a program that prompts the user to enter the numeratorand 
//denominator of a fractionand then calculates the 
//fraction's decimal value. If the denominator is zero, 
//the program should throw an exception.

#include <iostream>
using namespace std;


class Exception {
private:
	int m_errorCode;
	char m_errorMessage[64];
	char m_functionName[64];
	int m_lineNo;
public:
	Exception(int errorCode, const char* errorMessage, const char* functionName, int lineno)
		: m_errorCode(errorCode), m_lineNo(lineno) {
		strcpy_s(m_errorMessage, 64, errorMessage);
		strcpy_s(m_functionName, 64, functionName);
	}
public:
	int GetErrorCode() const { return m_errorCode; }
	const char* GetDescription() const { return m_errorMessage; }
	const char* GetFunctionName() const { return m_functionName; }
	int GetLineNo() const { return m_lineNo; }
};


class DenominatorZeroException : public Exception {
public:
	DenominatorZeroException(const char* functionName, int lineno) : Exception(
		101, "Denominator is Zero", functionName, lineno
	) {}
};

float makeDecimal(float numerator, float denominator) {
	if (denominator == 0)
		throw DenominatorZeroException(__FUNCTION__,__LINE__);
	return numerator / denominator;
}

int main() {
	try{
		float numerator = 0.0, denominator = 0.0;
		cout << "Enter numerator : ";
		cin >> numerator;
		cout << "Enter Denominator : ";
		cin >> denominator;
		float result = makeDecimal(numerator, denominator);
		cout << "Decimal : " << result << endl;
	}
	catch (DenominatorZeroException &e) {
		cout << e.GetErrorCode() << endl;
		cout << e.GetDescription() << endl;
		cout << e.GetFunctionName() << endl;
		cout << e.GetLineNo() << endl;
	}
	catch (Exception& e) {
		cout << e.GetErrorCode() << endl;
		cout << e.GetDescription() << endl;
		cout << e.GetFunctionName() << endl;
		cout << e.GetLineNo() << endl;
	}
}