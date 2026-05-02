#ifndef LISTA_LIBRERIA_H
#define LISTA_LIBRERIA_H

#include <list>

class ListaLibreria {
private:
    std::list<int> lista;

public:
    void insertar(int valor);
    void eliminar();
    void mostrar();
    void ordenarBurbuja();
};

#endif