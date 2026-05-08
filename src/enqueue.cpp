#include "cola.h"
#include <iostream>
using namespace std;

void enqueue(queue<int>& cola, int valor) {
    cola.push(valor);
    cout << "[COLA] Elemento " << valor << " agregado al final.\n";
}
