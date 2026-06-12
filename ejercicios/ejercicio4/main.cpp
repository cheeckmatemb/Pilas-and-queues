#include <iostream>
#include "Atleta.h"
#include "Carrera.h"
using namespace std;

int main() {
    Carrera carr1(1000, 3);

    Atleta a1("Pancho", 1, "Mexico",   9.1f);
    Atleta a2("Chacho", 3, "Colombia", 3.6f);
    Atleta a3("Robert", 2, "Chile",    6.9f);

    carr1.addAtleta(a1);
    carr1.addAtleta(a2);
    carr1.addAtleta(a3);

    cout << "=== Competidores ===\n";
    carr1.mostrarCompetidores();

    Atleta ganador = carr1.ganador();
    cout << "\n=== Ganador ===\n" << ganador;
    return 0;
}
