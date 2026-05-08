#include "pila.h"
#include <iostream>

void pop_pila(std::stack<int>& pila) {
    if (pila.empty()) {
        std::cout << "[PILA] Error: la pila esta vacia, no se puede eliminar.\n";
        return;
    }
    std::cout << "[PILA] Elemento " << pila.top() << " eliminado del tope.\n";
    pila.pop();
}
