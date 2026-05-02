#ifndef COLA_ARREGLO_H
#define COLA_ARREGLO_H
#include "Cola.h"
#include <iostream>
using namespace std;

#define MAX 100

class ColaArreglo : public Cola {
private:
    int datos[MAX];
    int frente;
    int final;
    int capacidad;

public:
    void inicializar(int cap);
    void insertar(int valor);
    void eliminar();
    void mostrar();
};

#endif