#pragma once
#include <cstring>
#include <assert.h>
#include <stdexcept>


#define QSIZE 10

class CircularQueue {
private:
    int m_start;
    int m_end;
    int queue[QSIZE];
public:
    CircularQueue();
    bool Empty() const;
    bool Full() const;
    void Push(int element);
    int Peek() const;
    void Pop();

};
