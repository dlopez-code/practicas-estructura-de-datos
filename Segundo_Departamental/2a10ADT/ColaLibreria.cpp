#include "ColaLibreria.h"
#include <iostream>
using namespace std;

// Insertar un elemento (enqueue)
void ColaLibreria::insertar(int valor) {
    cola.push(valor);
    cout << "Elemento insertado\n";
}

// Eliminar un elemento (dequeue)
void ColaLibreria::eliminar() {

    // Verificar si la cola esta vacia
    if(cola.empty()) {
        cout << "La cola esta vacia\n";
        return;
    }

    cout << "Elemento eliminado: " << cola.front() << endl;
    cola.pop();
}

// Mostrar el contenido de la cola
void ColaLibreria::mostrar() {

    if(cola.empty()) {
        cout << "La cola esta vacia\n";
        return;
    }

    // Crear copia para no modificar la cola original
    queue<int> aux = cola;

    cout << "Elementos de la cola:\n";
    // Recorrer mostrando el frente y eliminandolo hasta vaciar la copia
    while(!aux.empty()) {
        cout << aux.front() << " ";
        aux.pop();
    }
    cout << endl;
}