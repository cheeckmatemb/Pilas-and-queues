#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Vagon.h"
#include "Tren.h"
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    // Ejercicio 5a: un solo vagon
    Vagon v;
    v.setClase(true);   // segunda clase
    v.ocupar();
    cout << "=== Estado del Vagon ===\n" << v;
    v.asientosOcupados();

    // Ejercicio 5b: tren completo
    Tren t(4, 7, "Aguascalientes", "Calvillo", 20, 10);
    t.llenar();
    cout << "\nTotal de ventas del tren: $" << t.totalVentas() << "\n";
    return 0;
}
