#include "cola.h"
#include <iostream>

void show_cola(std::queue<int> cola) {
    if (cola.empty()) {
        std::cout << "[COLA] La cola esta vacia.\n";
        return;
    }
    std::cout << "[COLA] Contenido (frente -> final):\n";
    int pos = 1;
    while (!cola.empty()) {
        std::cout << "  [" << pos++ << "] " << cola.front() << "\n";
        cola.pop();
    }
}
