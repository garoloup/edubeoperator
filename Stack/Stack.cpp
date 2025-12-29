#include "Stack.h"



void Stack::push(int value) {
    stackstore[SP++] = value;
}
