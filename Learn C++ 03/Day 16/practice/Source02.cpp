//Write a program that reads in two arrays of integersand computes 
//their dot product.If the arrays are of different lengths, 
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


class DifferentLengthException : public Exception {
public:
	DifferentLengthException(const char* functionName, int lineno) : Exception(
		101, "Array of different length", functionName, lineno
	) {}
};

int dotProduct(int arr1[], int size1, int arr2[], int size2) {
	if (size1 != size2)
		throw DifferentLengthException(__FUNCTION__, __LINE__);
	int ans = 0;
	for (int i = 0; i < size1; i++) {
		ans += (arr1[i] * arr2[i]);
	}
	return ans;
}

int main() {
	try{
		int arr1[] = { 1, 2, 3, 4 };
		int size1 = 4;
		int arr2[] = { 2, 3, 4, 5 };
		int size2 = 3;
		int result = dotProduct(arr1, size1, arr2, size2);
		cout << result << endl;
	}
	catch (DifferentLengthException &e) {
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
