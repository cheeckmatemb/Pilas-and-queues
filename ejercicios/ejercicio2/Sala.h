#pragma once
#include <string>
using namespace std;

class Sala {
private:
    string nombre;
    int largo, ancho;
    bool equipado;
public:
    Sala(string nombre, int largo, int ancho, bool equipado);
    inline string getNombre() { return nombre; }
    inline int getAncho()    { return ancho; }
    inline int getLargo()    { return largo; }
    inline bool getEquipado(){ return equipado; }
    int calcularArea();
    int calcularCapacidad();
    int calcularAlquiler();
    void mostrarDatos();
};
