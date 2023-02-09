#include "Stack.h"

bool Stack::Empty() const {
    return pointer == -1;
}
void Stack::Push(char element) {
    pointer++;
    if (pointer == 100000)
        throw std::invalid_argument("Stack Overflow");
    stack[pointer] = element;
}
char Stack::Top() const {
    return stack[pointer];
}
void Stack::Pop() {
    if (pointer == -1)
        throw std::invalid_argument("Stack Underflow");
    pointer--;
}
