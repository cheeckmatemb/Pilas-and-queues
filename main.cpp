#include <iostream>
#include <stack>
#include <queue>
#include "pila.h"
#include "cola.h"
using namespace std;

void menu_pila(stack<int>& pila);
void menu_cola(queue<int>& cola);

int main() {
    stack<int> pila;
    queue<int> cola;
    int opcion;

    do {
        cout << "\n=============================\n";
        cout << "      MENU PRINCIPAL         \n";
        cout << "=============================\n";
        cout << "  1. Operaciones con Pila    \n";
        cout << "  2. Operaciones con Cola    \n";
        cout << "  0. Salir                   \n";
        cout << "=============================\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: menu_pila(pila); break;
            case 2: menu_cola(cola); break;
            case 0: cout << "Saliendo del programa...\n"; break;
            default: cout << "Opcion no valida. Intente de nuevo.\n"; break;
        }
    } while (opcion != 0);

    return 0;
}

void menu_pila(stack<int>& pila) {
    int opcion, valor;

    do {
        cout << "\n=============================\n";
        cout << "        MENU PILA            \n";
        cout << "=============================\n";
        cout << "  1. Push  (Insertar)        \n";
        cout << "  2. Pop   (Eliminar tope)   \n";
        cout << "  3. Top   (Ver tope)        \n";
        cout << "  4. Size  (Tamano)          \n";
        cout << "  5. Empty (Esta vacia?)     \n";
        cout << "  6. Show  (Mostrar todo)    \n";
        cout << "  0. Regresar al menu        \n";
        cout << "=============================\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el valor a insertar: ";
                cin >> valor;
                push_pila(pila, valor);
                break;
            case 2:
                pop_pila(pila);
                break;
            case 3: {
                int tope = top_pila(pila);
                if (tope != -1)
                    cout << "Tope de la pila: " << tope << "\n";
                break;
            }
            case 4:
                cout << "Tamano de la pila: " << size_pila(pila) << "\n";
                break;
            case 5:
                cout << (empty_pila(pila) ? "La pila esta VACIA.\n" : "La pila NO esta vacia.\n");
                break;
            case 6:
                show_pila(pila);
                break;
            case 0:
                break;
            default:
                cout << "Opcion no valida.\n";
                break;
        }
    } while (opcion != 0);
}

void menu_cola(queue<int>& cola) {
    int opcion, valor;

    do {
        cout << "\n=============================\n";
        cout << "        MENU COLA            \n";
        cout << "=============================\n";
        cout << "  1. Enqueue (Agregar)       \n";
        cout << "  2. Dequeue (Eliminar)      \n";
        cout << "  3. Front   (Ver frente)    \n";
        cout << "  4. Size    (Tamano)        \n";
        cout << "  5. Empty   (Esta vacia?)   \n";
        cout << "  6. Show    (Mostrar todo)  \n";
        cout << "  0. Regresar al menu        \n";
        cout << "=============================\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el valor a agregar: ";
                cin >> valor;
                enqueue(cola, valor);
                break;
            case 2:
                dequeue(cola);
                break;
            case 3: {
                int frente = front_cola(cola);
                if (frente != -1)
                    cout << "Frente de la cola: " << frente << "\n";
                break;
            }
            case 4:
                cout << "Tamano de la cola: " << size_cola(cola) << "\n";
                break;
            case 5:
                cout << (empty_cola(cola) ? "La cola esta VACIA.\n" : "La cola NO esta vacia.\n");
                break;
            case 6:
                show_cola(cola);
                break;
            case 0:
                break;
            default:
                cout << "Opcion no valida.\n";
                break;
        }
    } while (opcion != 0);
}
