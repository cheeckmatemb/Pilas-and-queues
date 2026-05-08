#include "pila.h"
#include <iostream>
using namespace std;

void push_pila(stack<int>& pila, int valor) {
    pila.push(valor);
    cout << "[PILA] Elemento " << valor << " insertado en el tope.\n";
}
