#include "Clock.h"
#include <stdexcept>


Clock::Clock(int hour, int minute, int second) {
    if (hour < 0 || hour > 24 || minute < 0 || minute >= 60 || second < 0 || second >= 60)
        throw std::invalid_argument("Parametres values are not valid");
    m_timeTicks = (hour * 3600) + (minute * 60) + second;
}

void time_splitter(int time, int& s, int& l) {
    s = 0;
    l = 0;
    if (time >= 0) {
        l = time % 10;
        time /= 10;
        s = time;
        return;
    }

    l = time % 10;
    return;

}

void actual_time(int time, int& hours, int& minutes, int& second) {
    hours = time / 3600;
    time -= (hours * 3600);
    minutes = time / 60;
    time -= (minutes * 60);
    second = time;
}

void Clock::Time(char timeString[], const int size) {
    int s = 0;
    int l = 0;
    int m_hour = 0;
    int m_minute = 0;
    int m_second = 0;
    actual_time(m_timeTicks, m_hour, m_minute, m_second);
    time_splitter(m_hour, s, l);
    timeString[0] = s + '0';
    timeString[1] = l + '0';
    timeString[2] = ':';
    time_splitter(m_minute, s, l);
    timeString[3] = s + '0';
    timeString[4] = l + '0';
    timeString[5] = ':';
    time_splitter(m_second, s, l);
    timeString[6] = s + '0';
    timeString[7] = l + '0';

}

void Clock::Tick() {
    if(m_timeTicks + 1 >= UINT32_MAX )
        throw std::invalid_argument("time get overflow");
    m_timeTicks += 1;
}
