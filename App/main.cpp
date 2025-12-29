#include "Stack.h"
#include <iostream>

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Popped value: " << s.pop() << std::endl; // Should print 30
    std::cout << "Popped value: " << s.pop() << std::endl; // Should print 20
    std::cout << "Popped value: " << s.pop() << std::endl; // Should print 10

    return 0;
}
