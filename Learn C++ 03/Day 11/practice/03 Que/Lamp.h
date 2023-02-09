#pragma once

#include <assert.h>
#include <iostream>


enum SwitchState {
    OffState,
    OnState
};

class Lamp {
private:
    SwitchState m_state;
public:
    Lamp();
public:
    void SwitchOn();
    void SwitchOff();
    SwitchState GetState();
};

