#pragma once
#include <string>
#include <ostream>
using namespace std;

class Atleta {
private:
    string nombre, nacion;
    int    numero;
    float  tiempo;
public:
    Atleta();
    Atleta(string nombre, int numero, string nacion, float tiempo);
    inline string getNombre() { return nombre; }
    inline string getNacion() { return nacion; }
    inline int    getNumero() { return numero; }
    inline float  getTiempo(){ return tiempo; }
    friend ostream& operator<<(ostream&, Atleta&);
};
