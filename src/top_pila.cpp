#include "pila.h"
#include <iostream>
using namespace std;

int top_pila(const stack<int>& pila) {
    if (pila.empty()) {
        cout << "[PILA] Error: la pila esta vacia, no hay tope.\n";
        return -1;
    }
    return pila.top();
}
