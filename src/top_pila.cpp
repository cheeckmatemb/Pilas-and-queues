#include "pila.h"
#include <iostream>

int top_pila(const std::stack<int>& pila) {
    if (pila.empty()) {
        std::cout << "[PILA] Error: la pila esta vacia, no hay tope.\n";
        return -1;
    }
    return pila.top();
}
