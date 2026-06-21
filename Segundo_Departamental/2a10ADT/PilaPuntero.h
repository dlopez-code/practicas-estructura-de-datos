#ifndef PILA_PUNTERO_H
#define PILA_PUNTERO_H

//Nodo
struct NodoP {
    int dato;
    NodoP* sig;
};

class PilaPuntero {
private:
    NodoP* tope;

public:
    PilaPuntero();//constructor
    void insertar(int valor);
    void eliminar();
    void mostrar();
};

#endif