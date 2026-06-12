#include "Atleta.h"

Atleta::Atleta() : nombre(""), nacion(""), numero(0), tiempo(0.0f) {}

Atleta::Atleta(string nombre, int numero, string nacion, float tiempo)
    : nombre(nombre), nacion(nacion), numero(numero), tiempo(tiempo) {}

ostream& operator<<(ostream& os, Atleta& a) {
    os << "Nombre: " << a.nombre << "\n"
       << "Numero: " << a.numero << "\n"
       << "Nacion: " << a.nacion << "\n"
       << "Tiempo: " << a.tiempo << " s\n";
    return os;
}
