#include "Dice.h"

Dice::Dice() {
    m_faceNumber = rand() % 6 + 1;
}

void Dice::Roll() {
    m_faceNumber = rand() % 6 + 1;
}

int Dice::GetFaceValue() const {
    return m_faceNumber;
}