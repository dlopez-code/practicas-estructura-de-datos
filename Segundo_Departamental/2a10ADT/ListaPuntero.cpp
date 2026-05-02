#include "ListaPuntero.h"
#include <iostream>
using namespace std;

// Constructor
ListaPuntero::ListaPuntero() {
    cabeza = NULL;
}

// Insertar un elemento al final de la lista
void ListaPuntero::insertar(int valor) {
    NodoL* nuevo = new NodoL();
    nuevo->dato = valor;
    nuevo->sig = NULL;

    // Si la lista esta vacia el nuevo nodo es la cabeza
    if(cabeza == NULL) {
        cabeza = nuevo;
    } else {
        // Recorrer hasta el ultimo nodo
        NodoL* aux = cabeza;
        while(aux->sig != NULL) {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }

    cout << "Elemento insertado\n";
}

// Eliminar el ultimo elemento de la lista
void ListaPuntero::eliminar() {

    // Lista vacia
    if(cabeza == NULL) {
        cout << "La lista esta vacia\n";
        return;
    }

    // Si solo hay un elemento
    if(cabeza->sig == NULL) {
        cout << "Elemento eliminado: " << cabeza->dato << endl;
        delete cabeza;
        cabeza = NULL;
        return;
    }

    // Recorrer hasta el penultimo nodo
    NodoL* aux = cabeza;
    while(aux->sig->sig != NULL) {
        aux = aux->sig;
    }

    cout << "Elemento eliminado: " << aux->sig->dato << endl;
    delete aux->sig;
    aux->sig = NULL;
}

// Mostrar el contenido de la lista
void ListaPuntero::mostrar() {

    if(cabeza == NULL) {
        cout << "La lista esta vacia\n";
        return;
    }

    NodoL* aux = cabeza;

    cout << "Elementos de la lista:\n";
    while(aux != NULL) {
        cout << aux->dato << " ";
        aux = aux->sig;
    }
    cout << endl;
}

// Ordenar la lista con burbuja
void ListaPuntero::ordenarBurbuja() {

    if(cabeza == NULL) {
        cout << "La lista esta vacia\n";
        return;
    }

    bool intercambio;
    NodoL* aux;
    NodoL* ultimo = NULL;

    do {
        intercambio = false;
        aux = cabeza;

        while(aux->sig != ultimo) {
            if(aux->dato > aux->sig->dato) {
                // Intercambiar datos entre nodos
                int temp = aux->dato;
                aux->dato = aux->sig->dato;
                aux->sig->dato = temp;
                intercambio = true;
            }
            aux = aux->sig;
        }
        ultimo = aux;

    } while(intercambio);

    cout << "Lista ordenada con burbuja\n";
}