#include "Tren.h"

Tren::Tren(int nP, int nS, string sal, string dest, int pP, int pS)
    : numeroPrimera(nP), numeroSegunda(nS), salida(sal), destino(dest),
      precioPrimera(pP), precioSegunda(pS) {
    vagones = new Vagon[nP + nS];
    for (int i = 0; i < nP; i++)          vagones[i].setClase(false);
    for (int i = nP; i < nP + nS; i++)    vagones[i].setClase(true);
}

Tren::~Tren() {
    delete[] vagones;
}

Vagon Tren::getVagon(int i) { return vagones[i]; }

void Tren::llenar() {
    for (int i = 0; i < numeroPrimera + numeroSegunda; i++)
        vagones[i].ocupar();
}

int Tren::totalVentas() {
    int total = 0;
    for (int i = 0; i < numeroPrimera; i++)
        total += vagones[i].contarOcupados() * precioPrimera;
    for (int i = numeroPrimera; i < numeroPrimera + numeroSegunda; i++)
        total += vagones[i].contarOcupados() * precioSegunda;
    return total;
}
