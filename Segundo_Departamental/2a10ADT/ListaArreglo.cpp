#include "ListaArreglo.h"
#include "Lista.h"
#include <iostream>
using namespace std;

// Inicializar la lista
void ListaArreglo::inicializar(int cap) {
    if(cap > MAX) {
        cout << "Capacidad excede el MAX, se usaran 100 elementos\n";
        capacidad = MAX;
    } else {
        capacidad = cap;
    }

    tope = -1; // -1 indica que la lista esta completamente vacia
}

// Insertar un elemento al final de la lista
void ListaArreglo::insertar(int valor) {

    // Verificar si la lista esta llena
    if(tope == capacidad - 1) {
        cout << "La lista esta llena\n";
        return;
    }

    tope++;
    datos[tope] = valor;
    cout << "Elemento insertado\n";
}

// Eliminar el ultimo elemento de la lista
void ListaArreglo::eliminar() {

    // Lista vacia
    if(tope == -1) {
        cout << "La lista esta vacia\n";
        return;
    }

    cout << "Elemento eliminado: " << datos[tope] << endl;
    tope--;
}

// Mostrar el contenido de la lista
void ListaArreglo::mostrar() {

    if(tope == -1) {
        cout << "La lista esta vacia\n";
        return;
    }

    cout << "Elementos de la lista:\n";
    // Recorrer de inicio a tope para mostrar en orden de insercion
    for(int i = 0; i <= tope; i++) {
        cout << datos[i] << " ";
    }
    cout << endl;
}

// Ordenar la lista con burbuja
void ListaArreglo::ordenarBurbuja() {

    if(tope == -1) {
        cout << "La lista esta vacia\n";
        return;
    }

    int n = tope + 1; // numero de elementos actuales
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(datos[j] > datos[j + 1]) {
                int temp = datos[j];
                datos[j] = datos[j + 1];
                datos[j + 1] = temp;
            }
        }
    }
    cout << "Lista ordenada con burbuja\n";
}