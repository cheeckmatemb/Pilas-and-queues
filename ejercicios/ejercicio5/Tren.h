#pragma once
#include <string>
#include "Vagon.h"
using namespace std;

class Tren {
private:
    Vagon* vagones;
    int    numeroPrimera, numeroSegunda;
    string salida, destino;
    int    precioPrimera, precioSegunda;
public:
    Tren(int nP, int nS, string sal, string dest, int pP, int pS);
    ~Tren();
    Vagon getVagon(int i);
    void  llenar();
    int   totalVentas();
};
