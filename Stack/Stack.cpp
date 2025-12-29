#include "Stack.h"

void Stack::push(int value) {
    if (SP >= 100) {
        throw std::length_error("Stack overflow: cannot push onto a full stack");
    }
    stackstore[SP++] = value;
}

int Stack::pop(void) {
    if (SP <= 0) {
        throw std::out_of_range("Stack underflow: cannot pop from an empty stack");
    }
    return stackstore[--SP];
}

Stack& Stack::operator<<(int value) {
    push(value);
    return *this;
}

Stack& Stack::operator>>(int& value) {
    value = pop();
    return *this;
}


