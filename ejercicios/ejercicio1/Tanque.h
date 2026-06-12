#pragma once

class Tanque {
    double contenido;
public:
    static const int capacidad = 5000;
    Tanque();
    double getContenido();
    void agregar(double cantidad);
    void sacar(double cantidad);
    void sacaMitad();
};
