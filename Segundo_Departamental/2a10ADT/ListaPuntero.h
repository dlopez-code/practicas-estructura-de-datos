#ifndef LISTA_PUNTERO_H
#define LISTA_PUNTERO_H
#include "Lista.h"

// Nodo
struct NodoL {
    int dato;
    NodoL* sig;
};

class ListaPuntero : public Lista {
private:
    NodoL* cabeza;

public:
    ListaPuntero(); // constructor
    void insertar(int valor);
    void eliminar();
    void mostrar();
    void ordenarBurbuja();
};

#endif