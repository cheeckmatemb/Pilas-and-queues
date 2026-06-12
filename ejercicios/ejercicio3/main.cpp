#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Persona.h"
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    Persona* personas[3] = {nullptr, nullptr, nullptr};

    for (int i = 0; i < 3; i++) {
        string nombre;
        int    edad;
        char   sexo;
        double peso, altura;

        cout << "\n-- Ingrese datos de la Persona " << (i + 1) << " --\n";
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Edad: ";
        cin >> edad;
        cout << "Sexo (H/M): ";
        cin >> sexo;
        cout << "Peso (kg): ";
        cin >> peso;
        cout << "Altura (m): ";
        cin >> altura;
        cin.ignore();

        personas[i] = new Persona(nombre, edad, sexo, peso, altura);
    }

    for (int i = 0; i < 3; i++) {
        cout << "\n=== Persona " << (i + 1) << " ===\n";

        int imc = personas[i]->calcularIMC();
        if      (imc == -1) cout << "Estado IMC: bajo peso\n";
        else if (imc ==  0) cout << "Estado IMC: peso ideal\n";
        else                cout << "Estado IMC: sobrepeso\n";

        cout << (personas[i]->esMayorDeEdad() ? "Es mayor de edad\n" : "Es menor de edad\n");
        personas[i]->mostrar();

        delete personas[i];
    }
    return 0;
}
