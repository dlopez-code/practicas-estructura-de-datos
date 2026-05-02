#ifndef COLA_PUNTERO_H
#define COLA_PUNTERO_H
#include "Cola.h"

// Nodo
struct NodoC {
    int dato;
    NodoC* sig;
};

class ColaPuntero : public Cola {
private:
    NodoC* frente;
    NodoC* final;

public:
    ColaPuntero(); // constructor
    void insertar(int valor);
    void eliminar();
    void mostrar();
};

#endif