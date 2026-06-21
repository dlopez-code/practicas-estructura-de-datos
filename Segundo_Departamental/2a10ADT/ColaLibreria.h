#ifndef COLA_LIBRERIA_H
#define COLA_LIBRERIA_H
#include "Cola.h"
#include <queue>
using namespace std;

class ColaLibreria : public Cola {
private:
    queue<int> cola;

public:
    void insertar(int valor);
    void eliminar();
    void mostrar();
};

#endif