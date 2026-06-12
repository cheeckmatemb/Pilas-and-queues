#include "Sala.h"
#include <iostream>

Sala::Sala(string nombre, int largo, int ancho, bool equipado)
    : nombre(nombre), largo(largo), ancho(ancho), equipado(equipado) {}

int Sala::calcularArea() {
    return largo * ancho;
}

int Sala::calcularCapacidad() {
    return static_cast<int>(calcularArea() / 1.5);
}

int Sala::calcularAlquiler() {
    return calcularArea() * (equipado ? 45 : 32);
}

void Sala::mostrarDatos() {
    cout << "Nombre:    " << nombre << "\n";
    cout << "Largo:     " << largo << " m\n";
    cout << "Ancho:     " << ancho << " m\n";
    cout << "Equipada:  " << (equipado ? "Si" : "No") << "\n";
    cout << "Superficie:" << calcularArea() << " m2\n";
    cout << "Capacidad: " << calcularCapacidad() << " personas\n";
    cout << "Alquiler:  $" << calcularAlquiler() << "\n";
}
