#include <iostream>
#include "Grafo.h"
#include "Digrafo.h"
#include "Arbol.h"

using namespace std;

void menuGrafo(){
    Grafo grafo;
    int opcion;

    do{
        cout << endl;
        cout << "MENU GRAFO" << endl;
        cout << "1. Cargar grafo desde grafo.json" << endl;
        cout << "2. Mostrar grafo" << endl;
        cout << "3. Agregar nodo" << endl;
        cout << "4. Agregar arista" << endl;
        cout << "5. Agregar conexion" << endl;
        cout << "6. Guardar cambios en grafo.json" << endl;
        cout << "7. Mejor ruta por tiempo" << endl;
        cout << "8. Mejor ruta por costo" << endl;
        cout << "0. Regresar al menu principal" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                grafo.cargarJSON();
                break;
            case 2:
                grafo.mostrarGrafo();
                break;
            case 3:
                grafo.agregarNodo();
                break;
            case 4:
                grafo.agregarArista();
                break;
            case 5:
                grafo.agregarConexion();
                break;
            case 6:
                grafo.guardarJSON();
                break;
            case 7:
                grafo.mejorRuta(1);
                break;
            case 8:
                grafo.mejorRuta(2);
                break;
            case 0:
                cout << "Regresando..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    }while(opcion != 0);
}

void menuDigrafo(){
    Digrafo digrafo;
    int opcion;

    do{
        cout << endl;
        cout << "MENU DIGRAFO" << endl;
        cout << "1. Cargar digrafo desde digrafo.json" << endl;
        cout << "2. Mostrar digrafo" << endl;
        cout << "3. Agregar nodo" << endl;
        cout << "4. Agregar arista" << endl;
        cout << "5. Agregar conexion" << endl;
        cout << "6. Guardar cambios en digrafo.json" << endl;
        cout << "7. Mejor ruta por tiempo" << endl;
        cout << "8. Mejor ruta por costo" << endl;
        cout << "0. Regresar al menu principal" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                digrafo.cargarJSON();
                break;
            case 2:
                digrafo.mostrarDigrafo();
                break;
            case 3:
                digrafo.agregarNodo();
                break;
            case 4:
                digrafo.agregarArista();
                break;
            case 5:
                digrafo.agregarConexion();
                break;
            case 6:
                digrafo.guardarJSON();
                break;
            case 7:
                digrafo.mejorRuta(1);
                break;
            case 8:
                digrafo.mejorRuta(2);
                break;
            case 0:
                cout << "Regresando..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    }while(opcion != 0);
}

void menuArbol(){
    Arbol arbol;
    int opcion;

    do{
        cout << endl;
        cout << "MENU ARBOL" << endl;
        cout << "1. Cargar arbol desde arbol.json" << endl;
        cout << "2. Mostrar arbol" << endl;
        cout << "3. Agregar nodo" << endl;
        cout << "4. Agregar arista" << endl;
        cout << "5. Agregar conexion padre-hijo" << endl;
        cout << "6. Guardar cambios en arbol.json" << endl;
        cout << "7. Mejor ruta por nivel" << endl;
        cout << "8. Mejor ruta por costo" << endl;
        cout << "0. Regresar al menu principal" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                arbol.cargarJSON();
                break;
            case 2:
                arbol.mostrarArbol();
                break;
            case 3:
                arbol.agregarNodo();
                break;
            case 4:
                arbol.agregarArista();
                break;
            case 5:
                arbol.agregarConexion();
                break;
            case 6:
                arbol.guardarJSON();
                break;
            case 7:
                arbol.mejorRuta(1);
                break;
            case 8:
                arbol.mejorRuta(2);
                break;
            case 0:
                cout << "Regresando..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    }while(opcion != 0);
}

int main(){
    int opcion;

    do{
        cout << endl;
        cout << "MENU PRINCIPAL" << endl;
        cout << "1. Usar grafo" << endl;
        cout << "2. Usar digrafo" << endl;
        cout << "3. Usar arbol" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                menuGrafo();
                break;
            case 2:
                menuDigrafo();
                break;
            case 3:
                menuArbol();
                break;
            case 0:
                cout << "Programa terminado." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    }while(opcion != 0);

    return 0;
}
