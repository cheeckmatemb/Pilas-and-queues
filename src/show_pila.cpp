#include "pila.h"
#include <iostream>

void show_pila(std::stack<int> pila) {
    if (pila.empty()) {
        std::cout << "[PILA] La pila esta vacia.\n";
        return;
    }
    std::cout << "[PILA] Contenido (tope -> fondo):\n";
    int pos = 1;
    while (!pila.empty()) {
        std::cout << "  [" << pos++ << "] " << pila.top() << "\n";
        pila.pop();
    }
}
