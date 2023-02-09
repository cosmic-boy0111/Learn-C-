#pragma once
#include <cstring>
#include <assert.h>
#include <vector>
#include <stdexcept>


#define SIZE 100000

class Stack {
private:
    int pointer = -1;
    char stack[SIZE];
public:
    bool Empty() const;
    char Top() const;
    void Push(char element);
    void Pop();
};