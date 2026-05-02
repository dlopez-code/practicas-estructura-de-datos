#ifndef PILA_ARREGLO_H
#define PILA_ARREGLO_H
#include "Pila.h"
#include <iostream>
using namespace std;

#define MAX 100

class PilaArreglo : public Pila {
private:
    int datos[MAX];
    int tope;
    int capacidad;

public:
    void inicializar(int cap);
    void insertar(int valor);
    void eliminar();
    void mostrar();
};

#endif