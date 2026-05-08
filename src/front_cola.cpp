#include "cola.h"
#include <iostream>
using namespace std;

int front_cola(const queue<int>& cola) {
    if (cola.empty()) {
        cout << "[COLA] Error: la cola esta vacia, no hay frente.\n";
        return -1;
    }
    return cola.front();
}
