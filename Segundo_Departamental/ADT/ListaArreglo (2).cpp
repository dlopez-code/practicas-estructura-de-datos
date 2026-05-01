#include "ListaArreglo.h"
#include "ListaArreglo.h"
#include <iostream>
using namespace std;

void ListaArreglo::inicializar() {
    tamano = 0; // La lista inicia sin elementos
}

void ListaArreglo::insertar(int valor, int posicion) {
    if (tamano == 5) {
        cout << "Error: La lista esta llena\n";
        return;
    }
    if (posicion < 0 || posicion > tamano) {
        cout << "Posicion invalida\n";
        return;
    }
    
	//Desplazar lista
    for (int i = tamano; i > posicion; i--) {
        datos[i] = datos[i - 1];
    }
    
	//Actualizar Tamaño
    datos[posicion] = valor;
    tamano++;
    cout << "Elemento " << valor << " insertado en posicion " << posicion << endl;
}

void ListaArreglo::eliminar(int posicion) {
    if (tamano == 0) {
        cout << "Error: La lista esta vacia\n";
        return;
    }

    if (posicion < 0 || posicion >= tamano) {
        cout << "Posicion invalida\n";
        return;
    }

    cout << "Elemento " << datos[posicion] << " eliminado.\n";

    //Dezplazar Elementos
    for (int i = posicion; i < tamano - 1; i++) {
        datos[i] = datos[i + 1];
    }

    //Actualizar tamano
    tamano--;
}

void ListaArreglo::mostrar() {
    if (tamano == 0) {
        cout << "La lista esta vacia\n";
        return;
    }

    cout << "Contenido de la lista: ";
    for (int i = 0; i < tamano; i++) {
        cout << "[" << datos[i] << "] ";
    }
    cout << endl;
}