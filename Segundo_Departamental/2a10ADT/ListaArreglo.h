#ifndef LISTA_ARREGLO_H
#define LISTA_ARREGLO_H
#include "Lista.h"
#include <iostream>
using namespace std;

#define MAX 100

class ListaArreglo : public Lista {
private:
    int datos[MAX];
    int tope;
    int capacidad;

public:
    void inicializar(int cap);
    void insertar(int valor);
    void eliminar();
    void mostrar();
    void ordenarBurbuja();
};

#endif