#include "Stack.h"
#include <iostream>

int main() {
    Stack s;
    int i=30;
    s.push(10);
    s.push(20);
    s << 25; // Using overloaded operator to push 25
    s << i; // Using overloaded operator to push 30

    std::cout << "Popped value: " << s.pop() << std::endl; // Should print 30
    std::cout << "Popped value: " << s.pop() << std::endl; // Should print 20
    s >> i; // Using overloaded operator to pop into i
    std::cout << "Popped value by operator: " << i << std::endl; // Should print 10

    return 0;
}
