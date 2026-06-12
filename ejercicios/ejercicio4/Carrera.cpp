#include "Carrera.h"
#include <iostream>

Carrera::Carrera(int distancia, int n)
    : distancia(distancia), numAtletas(n), indx(0) {
    competidores = new Atleta[n];
}

Carrera::~Carrera() {
    delete[] competidores;
}

void Carrera::addAtleta(Atleta& a) {
    if (indx < numAtletas)
        competidores[indx++] = a;
}

Atleta Carrera::ganador() {
    Atleta win = competidores[0];
    for (int i = 1; i < indx; i++)
        if (competidores[i].getTiempo() < win.getTiempo())
            win = competidores[i];
    return win;
}

void Carrera::mostrarCompetidores() {
    for (int i = 0; i < indx; i++) {
        cout << "--- Atleta " << (i + 1) << " ---\n";
        cout << competidores[i];
    }
}
