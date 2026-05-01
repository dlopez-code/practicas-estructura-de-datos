#ifndef LISTAARREGLO_H
#define LISTAARREGLO_H

#include "lista.h" 
class ListaArreglo : public Lista
{
    private:
        int datos[5];    
        int tamano;     
    
    public:
        void inicializar();
        void insertar(int valor, int posicion); 
        void eliminar(int posicion);            
        void mostrar();
};

#endif