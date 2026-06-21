#ifndef COLA_LIBRERIA_H
#define COLA_LIBRERIA_H
#include "Cola.h"
#include <queue>
#include <fstream>
using namespace std;

class ColaLibreria : public Cola {
private:
    queue<int> cola;

public:
    void insertar(int valor);
    void eliminar();
    void mostrar();
    void guardarArchivo(ofstream &archivo);
};

#endif