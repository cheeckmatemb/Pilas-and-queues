#include "pila.h"
#include <iostream>
using namespace std;

void pop_pila(stack<int>& pila) {
    if (pila.empty()) {
        cout << "[PILA] Error: la pila esta vacia, no se puede eliminar.\n";
        return;
    }
    cout << "[PILA] Elemento " << pila.top() << " eliminado del tope.\n";
    pila.pop();
}
