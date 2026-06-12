#pragma once
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    string id;
    char sexo;
    double peso;
    double altura;

    char comprobarSexo(char s);
    void generaID();

public:
    Persona(string nombre, int edad, char sexo, double peso, double altura);

    void setNombre(string n);
    void setEdad(int e);
    void setSexo(char s);
    void setPeso(double p);
    void setAltura(double a);

    string getNombre();
    int    getEdad();
    char   getSexo();
    double getPeso();
    double getAltura();

    int  calcularIMC();
    bool esMayorDeEdad();
    void mostrar();
};
