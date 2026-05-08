#include "cola.h"
#include <iostream>
using namespace std;

void show_cola(queue<int> cola) {
    if (cola.empty()) {
        cout << "[COLA] La cola esta vacia.\n";
        return;
    }
    cout << "[COLA] Contenido (frente -> final):\n";
    int pos = 1;
    while (!cola.empty()) {
        cout << "  [" << pos++ << "] " << cola.front() << "\n";
        cola.pop();
    }
}
