//write a program that reads in a file and counts the number of 
//words in the file.if the file does not exist or cannot be opened, 
//the program should throw an exception.

#include <iostream>
#include <fstream>
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


class FileNotFound : public Exception {
public:
	FileNotFound(const char* functionName, int lineno) : Exception(
		101, "File Not Found", functionName, lineno
	) {}
};

int wordCount(string filename) {
	ifstream file(filename);
	if (!file)
		throw FileNotFound(__FUNCTION__, __LINE__);
	int count = 0;
	while (!file.eof()){
		count++;
		string s;
		file >> s;
	}
	file.close()
	return count;
}

int main() {
	try{
		cout << wordCount("dictionary.txt") << endl;
		cout << wordCount("dictionary2.txt") << endl;
	}
	catch (FileNotFound &e) {
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
