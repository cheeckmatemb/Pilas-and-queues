#include "Persona.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Persona::Persona(string nombre, int edad, char sexo, double peso, double altura)
    : nombre(nombre), edad(edad), peso(peso), altura(altura) {
    this->sexo = comprobarSexo(sexo);
    generaID();
}

char Persona::comprobarSexo(char s) {
    return (s == 'H' || s == 'M') ? s : 'H';
}

void Persona::generaID() {
    int num = rand() % 900 + 100;
    id = "";
    for (char c : nombre) {
        if (c != ' ' && id.size() < 3)
            id += c;
    }
    id += to_string(num);
}

void Persona::setNombre(string n) { nombre = n; }
void Persona::setEdad(int e)      { edad = e; }
void Persona::setSexo(char s)     { sexo = comprobarSexo(s); }
void Persona::setPeso(double p)   { peso = p; }
void Persona::setAltura(double a) { altura = a; }

string Persona::getNombre() { return nombre; }
int    Persona::getEdad()   { return edad; }
char   Persona::getSexo()   { return sexo; }
double Persona::getPeso()   { return peso; }
double Persona::getAltura() { return altura; }

int Persona::calcularIMC() {
    double imc = peso / (altura * altura);
    if (imc < 20) return -1;
    if (imc <= 25) return 0;
    return 1;
}

bool Persona::esMayorDeEdad() {
    return edad >= 18;
}

void Persona::mostrar() {
    cout << "Nombre: " << nombre << "\n";
    cout << "Edad:   " << edad   << "\n";
    cout << "ID:     " << id     << "\n";
    cout << "Sexo:   " << sexo   << "\n";
    cout << "Peso:   " << peso   << " kg\n";
    cout << "Altura: " << altura << " m\n";
}
