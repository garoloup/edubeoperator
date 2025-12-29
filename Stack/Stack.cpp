#include "Stack.h"

int Stack::pop(void) {
         return stackstore[--SP];
     }

void Stack::push(int value) {
    stackstore[SP++] = value;
}

Stack& Stack::operator<<(int value) {
    push(value);
    return *this;
}

Stack& Stack::operator>>(int& value) {
    value = pop();
    return *this;
}


