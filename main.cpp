#include <iostream>
#include <stack>
#include <queue>
#include "pila.h"
#include "cola.h"

void menu_pila(std::stack<int>& pila);
void menu_cola(std::queue<int>& cola);

int main() {
    std::stack<int> pila;
    std::queue<int> cola;
    int opcion;

    do {
        std::cout << "\n=============================\n";
        std::cout << "      MENU PRINCIPAL         \n";
        std::cout << "=============================\n";
        std::cout << "  1. Operaciones con Pila    \n";
        std::cout << "  2. Operaciones con Cola    \n";
        std::cout << "  0. Salir                   \n";
        std::cout << "=============================\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: menu_pila(pila); break;
            case 2: menu_cola(cola); break;
            case 0: std::cout << "Saliendo del programa...\n"; break;
            default: std::cout << "Opcion no valida. Intente de nuevo.\n"; break;
        }
    } while (opcion != 0);

    return 0;
}

void menu_pila(std::stack<int>& pila) {
    int opcion, valor;

    do {
        std::cout << "\n=============================\n";
        std::cout << "        MENU PILA            \n";
        std::cout << "=============================\n";
        std::cout << "  1. Push  (Insertar)        \n";
        std::cout << "  2. Pop   (Eliminar tope)   \n";
        std::cout << "  3. Top   (Ver tope)        \n";
        std::cout << "  4. Size  (Tamano)          \n";
        std::cout << "  5. Empty (Esta vacia?)     \n";
        std::cout << "  6. Show  (Mostrar todo)    \n";
        std::cout << "  0. Regresar al menu        \n";
        std::cout << "=============================\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese el valor a insertar: ";
                std::cin >> valor;
                push_pila(pila, valor);
                break;
            case 2:
                pop_pila(pila);
                break;
            case 3: {
                int tope = top_pila(pila);
                if (tope != -1)
                    std::cout << "Tope de la pila: " << tope << "\n";
                break;
            }
            case 4:
                std::cout << "Tamano de la pila: " << size_pila(pila) << "\n";
                break;
            case 5:
                std::cout << (empty_pila(pila) ? "La pila esta VACIA.\n" : "La pila NO esta vacia.\n");
                break;
            case 6:
                show_pila(pila);
                break;
            case 0:
                break;
            default:
                std::cout << "Opcion no valida.\n";
                break;
        }
    } while (opcion != 0);
}

void menu_cola(std::queue<int>& cola) {
    int opcion, valor;

    do {
        std::cout << "\n=============================\n";
        std::cout << "        MENU COLA            \n";
        std::cout << "=============================\n";
        std::cout << "  1. Enqueue (Agregar)       \n";
        std::cout << "  2. Dequeue (Eliminar)      \n";
        std::cout << "  3. Front   (Ver frente)    \n";
        std::cout << "  4. Size    (Tamano)        \n";
        std::cout << "  5. Empty   (Esta vacia?)   \n";
        std::cout << "  6. Show    (Mostrar todo)  \n";
        std::cout << "  0. Regresar al menu        \n";
        std::cout << "=============================\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese el valor a agregar: ";
                std::cin >> valor;
                enqueue(cola, valor);
                break;
            case 2:
                dequeue(cola);
                break;
            case 3: {
                int frente = front_cola(cola);
                if (frente != -1)
                    std::cout << "Frente de la cola: " << frente << "\n";
                break;
            }
            case 4:
                std::cout << "Tamano de la cola: " << size_cola(cola) << "\n";
                break;
            case 5:
                std::cout << (empty_cola(cola) ? "La cola esta VACIA.\n" : "La cola NO esta vacia.\n");
                break;
            case 6:
                show_cola(cola);
                break;
            case 0:
                break;
            default:
                std::cout << "Opcion no valida.\n";
                break;
        }
    } while (opcion != 0);
}
