#include "PilaArreglo.h"
#include "Pila.h"
#include <iostream>
using namespace std;

// Inicializar la pila
void PilaArreglo::inicializar(int cap) {
    if(cap > MAX) {
        cout << "Capacidad excede el MAX, se usaran 100 elementos\n";
        capacidad = MAX;
    } else {
        capacidad = cap;
    }

    tope = -1; // -1 indica que la pila esta completamente vacia
}

// Insertar un elemento (push)
void PilaArreglo::insertar(int valor) {

    // Verificar si la pila esta llena
    if(tope == capacidad - 1) {
        cout << "La pila esta llena\n";
        return;
    }

    tope++;
    datos[tope] = valor;
    cout << "Elemento insertado\n";
}

// Eliminar un elemento (pop)
void PilaArreglo::eliminar() {

    // Pila vacia
    if(tope == -1) {
        cout << "La pila esta vacia\n";
        return;
    }

    cout << "Elemento eliminado: " << datos[tope] << endl;
    tope--;
}

// Mostrar el contenido de la pila
void PilaArreglo::mostrar() {

    if(tope == -1) {
        cout << "La pila esta vacia\n";
        return;
    }

    cout << "Elementos de la pila:\n";
    // Recorrer de tope a base para mostrar en orden LIFO
    for(int i = tope; i >= 0; i--) {
        cout << datos[i] << " ";
    }
    cout << endl;
}