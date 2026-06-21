#include <iostream>
#include "ColaArreglo.h"
#include "ColaPuntero.h"
#include "ColaLibreria.h"
#include "PilaLibreria.h"
#include "PilaArreglo.h"
#include "PilaPuntero.h"
#include "ListaLibreria.h"
#include "ListaArreglo.h"
#include "ListaPuntero.h"

using namespace std;

int main(int argc, char** argv){

    ColaArreglo colaArr;
    ColaPuntero colaP;
    ColaLibreria colaLib;
    PilaArreglo pilaArr;
    PilaLibreria pilaLib;
    PilaPuntero pilaP;
    ListaArreglo listaArr;
    ListaLibreria listaLib;
    ListaPuntero listaP;

    int opcion, op, valor, tam;

    do {
        cout << "\n===== MENU PRINCIPAL =====\n";
        cout << "1. Cola (Arreglo)\n";
        cout << "2. Cola (Puntero)\n";
        cout << "3. Cola (Libreria)\n";
        cout << "4. Pila (Arreglo)\n";
        cout << "5. Pila (Libreria)\n";
        cout << "6. Pila (Puntero)\n";
        cout << "7. Lista (Arreglo)\n";
        cout << "8. Lista (Libreria)\n";
        cout << "9. Lista (Puntero)\n";
        cout << "10. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){

        // ===== COLA ARREGLO =====
        case 1:
            cout << "Tamano de la cola: ";
            cin >> tam;
            colaArr.inicializar(tam);

            do {
                cout << "\n--- COLA (ARREGLO) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    colaArr.insertar(valor);
                }
                else if(op == 2){
                    colaArr.eliminar();
                }
                else if(op == 3){
                    colaArr.mostrar();
                }

            } while(op != 0);
            break;

        // ===== COLA PUNTERO =====
        case 2:
            do {
                cout << "\n--- COLA (PUNTERO) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    colaP.insertar(valor);
                }
                else if(op == 2){
                    colaP.eliminar();
                }
                else if(op == 3){
                    colaP.mostrar();
                }

            } while(op != 0);
            break;

        // ===== COLA LIBRERIA =====
        case 3:
            do {
                cout << "\n--- COLA (LIBRERIA) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    colaLib.insertar(valor);
                }
                else if(op == 2){
                    colaLib.eliminar();
                }
                else if(op == 3){
                    colaLib.mostrar();
                }

            } while(op != 0);
            break;

        // ===== PILA ARREGLO =====
        case 4:
            cout << "Tamano de la pila: ";
            cin >> tam;
            pilaArr.inicializar(tam);

            do {
                cout << "\n--- PILA (ARREGLO) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    pilaArr.insertar(valor);
                }
                else if(op == 2){
                    pilaArr.eliminar();
                }
                else if(op == 3){
                    pilaArr.mostrar();
                }

            } while(op != 0);
            break;

        // ===== PILA LIBRERIA =====
        case 5:
            do {
                cout << "\n--- PILA (LIBRERIA) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    pilaLib.insertar(valor);
                }
                else if(op == 2){
                    pilaLib.eliminar();
                }
                else if(op == 3){
                    pilaLib.mostrar();
                }

            } while(op != 0);
            break;

        // ===== PILA PUNTERO =====
        case 6:
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

        // ===== LISTA ARREGLO =====
        case 7:
            cout << "Tamano de la lista: ";
            cin >> tam;
            listaArr.inicializar(tam);

            do {
                cout << "\n--- LISTA (ARREGLO) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n4. Ordenar (Burbuja)\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    listaArr.insertar(valor);
                }
                else if(op == 2){
                    listaArr.eliminar();
                }
                else if(op == 3){
                    listaArr.mostrar();
                }
                else if(op == 4){
                    listaArr.ordenarBurbuja();
                }

            } while(op != 0);
            break;

        // ===== LISTA LIBRERIA =====
        case 8:
            do {
                cout << "\n--- LISTA (LIBRERIA) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n4. Ordenar (Burbuja)\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    listaLib.insertar(valor);
                }
                else if(op == 2){
                    listaLib.eliminar();
                }
                else if(op == 3){
                    listaLib.mostrar();
                }
                else if(op == 4){
                    listaLib.ordenarBurbuja();
                }

            } while(op != 0);
            break;

        // ===== LISTA PUNTERO =====
        case 9:
            do {
                cout << "\n--- LISTA (PUNTERO) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n4. Ordenar (Burbuja)\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    listaP.insertar(valor);
                }
                else if(op == 2){
                    listaP.eliminar();
                }
                else if(op == 3){
                    listaP.mostrar();
                }
                else if(op == 4){
                    listaP.ordenarBurbuja();
                }

            } while(op != 0);
            break;

        case 10:
            cout << "Saliendo del programa...\n";
            break;

        default:
            cout << "Opcion invalida\n";
        }

    } while(opcion != 10);

    cout << "Programa terminado\n";
    return 0;
}