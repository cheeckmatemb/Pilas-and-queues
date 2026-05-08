#include "cola.h"
#include <iostream>

void enqueue(std::queue<int>& cola, int valor) {
    cola.push(valor);
    std::cout << "[COLA] Elemento " << valor << " agregado al final.\n";
}
