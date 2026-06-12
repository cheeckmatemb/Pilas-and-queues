#pragma once
#include "Atleta.h"

class Carrera {
private:
    Atleta* competidores;
    int distancia, numAtletas, indx;
public:
    Carrera(int distancia, int n);
    ~Carrera();
    void addAtleta(Atleta& a);
    inline int getDistancia()     { return distancia; }
    inline int getNumeroAtletas() { return numAtletas; }
    Atleta ganador();
    void mostrarCompetidores();
};
