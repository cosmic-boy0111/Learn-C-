#pragma once

#include "Keyboard.h"
#include "Motherboard.h"

class CPU {
public:
	CPU();
	~CPU();
public:
	void AttachKeyboard(Keyboard* pkeyboard);
	void DetachKeyboard();
private:
	Keyboard* m_pkeyboard; // aggregation
	Motherboard m_motherboard; // composition
};

