//Write a program that simulates a stack of integers.
//The program should allow the user to pushand pop integers 
//ontoand off of the stack.If the user tries to pop an 
//element from an empty stack, the program should throw an exception.

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


class StackUnderflow : public Exception {
public:
	StackUnderflow(const char* functionName, int lineno) : Exception(
		101, "Stack Underflow : No element in stack", functionName, lineno
	) {}
};

class StackOverflow : public Exception {
public:
	StackOverflow(const char* functionName, int lineno) : Exception(
		101, "Stack Overflow : stack is full", functionName, lineno
	) {}
};

class Stack {
private:
	int stack_size;
	int counter;
	int* arr;
public:
	Stack(int size) {
		stack_size = size;
		counter = 0;
		arr = new int[size];
	}
	~Stack() {
		delete[] arr;
		arr = nullptr;
	}

public:
	void push(int val) {
		if (counter == stack_size)
			throw StackOverflow(__FUNCTION__,__LINE__);
		arr[counter++] = val;
	}

	int pop() {
		if (counter == 0) {
			throw StackUnderflow(__FUNCTION__, __LINE__);
			return -1;
		}
		counter--;
		return arr[counter];
	}

};

int main() {

	try{
		Stack s(5);
		for (int i = 0; i < 5; i++) {
			s.push(i);
		}
		for (int i = 0; i < 6; i++) {
			s.pop();
		}
	}
	catch (StackOverflow &e){
		cout << e.GetErrorCode() << endl;
		cout << e.GetDescription() << endl;
		cout << e.GetFunctionName() << endl;
		cout << e.GetLineNo() << endl;
	}
	catch (StackUnderflow& e) {
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