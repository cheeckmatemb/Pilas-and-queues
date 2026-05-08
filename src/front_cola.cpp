#include "cola.h"
#include <iostream>

int front_cola(const std::queue<int>& cola) {
    if (cola.empty()) {
        std::cout << "[COLA] Error: la cola esta vacia, no hay frente.\n";
        return -1;
    }
    return cola.front();
}
