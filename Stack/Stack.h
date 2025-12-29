#pragma once

class Stack {
    private:
    int stackstore[100];
    int SP;
    public:
        Stack(void) { SP = 0; }
    void push(int value);
    int pop(void);
    Stack& operator<<(int value);
    Stack& operator>>(int& value);
};
