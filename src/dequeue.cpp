#include "cola.h"
#include <iostream>
using namespace std;

void dequeue(queue<int>& cola) {
    if (cola.empty()) {
        cout << "[COLA] Error: la cola esta vacia, no se puede eliminar.\n";
        return;
    }
    cout << "[COLA] Elemento " << cola.front() << " eliminado del frente.\n";
    cola.pop();
}
