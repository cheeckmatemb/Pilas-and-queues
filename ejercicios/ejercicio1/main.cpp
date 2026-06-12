#include <iostream>
#include "Tanque.h"
using namespace std;

int main(void) {
    Tanque t;
    t.agregar(100.0);
    while (t.getContenido() >= 1.0) {
        t.sacaMitad();
    }
    cout << "El contenido final es: " << t.getContenido() << "\n";
    return 0;
}
