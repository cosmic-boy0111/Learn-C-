#include "Lamp.h"

Lamp::Lamp() {
    m_state = OffState;
}

void Lamp::SwitchOn() {
    m_state = OnState;
}

void Lamp::SwitchOff() {
    m_state = OffState;
}

SwitchState Lamp::GetState() {
    return m_state;
}

