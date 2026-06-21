#include "ColaLibreria.h"
#include <iostream>
using namespace std;

void ColaLibreria::insertar(int valor) {
    cola.push(valor);
    cout << "Elemento insertado\n";
}

void ColaLibreria::eliminar() {

    if(cola.empty()) {
        cout << "La cola esta vacia\n";
        return;
    }

    cout << "Elemento eliminado: " << cola.front() << endl;
    cola.pop();
}

void ColaLibreria::mostrar() {

    if(cola.empty()) {
        cout << "La cola esta vacia\n";
        return;
    }

    queue<int> aux = cola;

    cout << "Elementos de la cola:\n";
    while(!aux.empty()) {
        cout << aux.front() << " ";
        aux.pop();
    }
    cout << endl;
}

void ColaLibreria::guardarArchivo(ofstream &archivo) {
    queue<int> aux = cola;

    while(!aux.empty()) {
        archivo << aux.front();
        aux.pop();
        if(!aux.empty()) {
            archivo << ",";
        }
    }
}