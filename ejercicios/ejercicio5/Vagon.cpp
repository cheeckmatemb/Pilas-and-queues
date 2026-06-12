#include "Vagon.h"
#include <iostream>
#include <cstdlib>

Vagon::Vagon() : clase(false) {
    for (int i = 0; i < 40; i++) asientos[i] = false;
}

Vagon::Vagon(bool clase) : clase(clase) {
    for (int i = 0; i < 40; i++) asientos[i] = false;
}

bool Vagon::getAsiento(int ind) { return asientos[ind]; }
void Vagon::setAsiento(int ind) { asientos[ind] = true; }
bool Vagon::getClase()          { return clase; }
void Vagon::setClase(bool c)    { clase = c; }

void Vagon::ocupar() {
    int prob = clase ? 40 : 10;
    for (int i = 0; i < 40; i++)
        asientos[i] = (rand() % 100) < prob;
}

void Vagon::asientosOcupados() {
    for (int i = 0; i < 40; i++)
        cout << "Asiento " << (i + 1) << ": "
             << (asientos[i] ? "Ocupado" : "Libre") << "\n";
}

int Vagon::contarOcupados() {
    int count = 0;
    for (int i = 0; i < 40; i++)
        if (asientos[i]) count++;
    return count;
}

ostream& operator<<(ostream& os, Vagon& v) {
    os << "Clase: " << (v.clase ? "Segunda" : "Primera") << "\n";
    os << "Asientos ocupados: " << v.contarOcupados() << "/40\n";
    return os;
}
