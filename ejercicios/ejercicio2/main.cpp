#include <iostream>
#include "Sala.h"
using namespace std;

int main(void) {
    Sala s1("Sala 1", 12,  8,  true);
    Sala s2("Sala 2", 20, 18, false);
    Sala s3("Sala 3", 15, 12,  true);
    Sala s[] = {s1, s2, s3};

    cout << "=== Datos de Sala 1 ===\n";
    s1.mostrarDatos();

    int eventos[4] = {200, 50, 100, 150};
    for (int i = 0; i < 4; i++) {
        cout << "\nEvento para " << eventos[i] << " personas:\n";
        for (int j = 0; j < 3; j++) {
            if (s[j].calcularCapacidad() >= eventos[i])
                cout << "  La sala " << s[j].getNombre()
                     << " tiene capacidad para " << eventos[i] << " personas\n";
        }
    }
    return 0;
}
