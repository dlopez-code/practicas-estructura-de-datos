#include "ColaPuntero.h"
#include <iostream>
using namespace std;

// Constructor
ColaPuntero::ColaPuntero() {
    frente = NULL;
    final = NULL;
}

// Insertar un elemento (enqueue)
void ColaPuntero::insertar(int valor) {
    NodoC* nuevo = new NodoC();
    nuevo->dato = valor;
    nuevo->sig = NULL;

    // Si la cola esta vacia el nuevo nodo es frente y final
    if(final == NULL) {
        frente = nuevo;
        final = nuevo;
    } else {
        // Si no, se enlaza al final y se actualiza el puntero final
        final->sig = nuevo;
        final = nuevo;
    }

    cout << "Elemento insertado\n";
}

// Eliminar un elemento (dequeue)
void ColaPuntero::eliminar() {

    // Cola vacia
    if(frente == NULL) {
        cout << "La cola esta vacia\n";
        return;
    }

    NodoC* aux = frente;
    cout << "Elemento eliminado: " << aux->dato << endl;

    frente = frente->sig;

    // Si la cola quedo vacia actualizamos final tambien
    if(frente == NULL) {
        final = NULL;
    }

    delete aux;
}

// Mostrar el contenido de la cola
void ColaPuntero::mostrar() {

    if(frente == NULL) {
        cout << "La cola esta vacia\n";
        return;
    }

    NodoC* aux = frente;

    cout << "Elementos de la cola:\n";
    // Recorrer desde el frente hasta el final
    while(aux != NULL) {
        cout << aux->dato << " ";
        aux = aux->sig;
    }
    cout << endl;
}