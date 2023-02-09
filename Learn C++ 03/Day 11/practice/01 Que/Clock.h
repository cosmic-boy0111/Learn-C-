#pragma once

#include <iostream>
#include <cstring>
#include <assert.h>
#include <climits>



class Clock {
private:
    long long m_timeTicks = 0;
public:
    Clock(int second = 0, int minute = 0, int hour = 0);
    void Time(char[], int size);
    void Tick();
};


