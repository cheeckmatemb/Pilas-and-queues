#include "pila.h"
#include <iostream>

void push_pila(std::stack<int>& pila, int valor) {
    pila.push(valor);
    std::cout << "[PILA] Elemento " << valor << " insertado en el tope.\n";
}
