#include <iostream>
#include "ColaArreglo.h"
#include "PilaLibreria.h"
#include "ListaLibreria.h"
#include "PilaPuntero.h"

using namespace std;

int main(int argc, char** argv){

    ColaArreglo cola;
    PilaLibreria pila;
    ListaLibreria lista;
    PilaPuntero pilaP;

    int opcion, op, valor, tam;

    do {
        cout << "\n===== MENU PRINCIPAL =====\n";
        cout << "1. Cola (Estatica)\n";
        cout << "2. Pila (Libreria)\n";
        cout << "3. Lista (Libreria)\n";
        cout << "4. Pila (Puntero)\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){

        // ===== COLA =====
        case 1:
            cout << "Tamano de la cola: ";
            cin >> tam;
            cola.inicializar(tam);

            do {
                cout << "\n--- COLA ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    cola.insertar(valor);
                }
                else if(op == 2){
                    cola.eliminar();
                }
                else if(op == 3){
                    cola.mostrar();
                }

            } while(op != 0);
            break;

        // ===== PILA LIBRERIA =====
        case 2:
            do {
                cout << "\n--- PILA (LIBRERIA) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    pila.insertar(valor);
                }
                else if(op == 2){
                    pila.eliminar();
                }
                else if(op == 3){
                    pila.mostrar();
                }

            } while(op != 0);
            break;

        // ===== LISTA =====
        case 3:
            do {
                cout << "\n--- LISTA ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n4. Ordenar (Burbuja)\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    lista.insertar(valor);
                }
                else if(op == 2){
                    lista.eliminar();
                }
                else if(op == 3){
                    lista.mostrar();
                }
                else if(op == 4){
                    lista.ordenarBurbuja();
                }

            } while(op != 0);
            break;

        // ===== PILA PUNTERO =====
        case 4:
            do {
                cout << "\n--- PILA (PUNTERO) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    pilaP.insertar(valor);
                }
                else if(op == 2){
                    pilaP.eliminar();
                }
                else if(op == 3){
                    pilaP.mostrar();
                }

            } while(op != 0);
            break;

        case 5:
            cout << "Saliendo del programa...\n";
            break;

        default:
            cout << "Opcion invalida\n";
        }

    } while(opcion != 5);

    cout << "Programa terminado\n";
    return 0;
}