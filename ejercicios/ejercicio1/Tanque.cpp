#include "Tanque.h"

Tanque::Tanque() : contenido(0.0) {}

double Tanque::getContenido() {
    return contenido;
}

void Tanque::agregar(double cantidad) {
    if (contenido + cantidad > capacidad)
        contenido = capacidad;
    else
        contenido += cantidad;
}

void Tanque::sacar(double cantidad) {
    if (cantidad > contenido)
        contenido = 0.0;
    else
        contenido -= cantidad;
}

void Tanque::sacaMitad() {
    if (contenido > 0.0)
        contenido /= 2.0;
}
