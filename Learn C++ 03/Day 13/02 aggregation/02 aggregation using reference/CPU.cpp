#include <iostream>
#include <stdexcept>
using namespace std;

#include "CPU.h"

CPU::CPU(Keyboard &obj) : m_keyboard(obj) {
	cout << "CPU constructor : " << endl;
}
CPU::~CPU() {
	cout << "CPU destructor : " << endl;
}
