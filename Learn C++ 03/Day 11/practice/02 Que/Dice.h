#pragma once

#include <cstdlib>
#include <assert.h>


class Dice {
private:
    int m_faceNumber;
public:
    Dice();

    void Roll();

    int GetFaceValue() const;

};