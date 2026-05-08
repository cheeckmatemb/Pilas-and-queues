#include "pila.h"
#include <iostream>
using namespace std;

void show_pila(stack<int> pila) {
    if (pila.empty()) {
        cout << "[PILA] La pila esta vacia.\n";
        return;
    }
    cout << "[PILA] Contenido (tope -> fondo):\n";
    int pos = 1;
    while (!pila.empty()) {
        cout << "  [" << pos++ << "] " << pila.top() << "\n";
        pila.pop();
    }
}
