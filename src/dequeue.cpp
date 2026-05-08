#include "cola.h"
#include <iostream>

void dequeue(std::queue<int>& cola) {
    if (cola.empty()) {
        std::cout << "[COLA] Error: la cola esta vacia, no se puede eliminar.\n";
        return;
    }
    std::cout << "[COLA] Elemento " << cola.front() << " eliminado del frente.\n";
    cola.pop();
}
