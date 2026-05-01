#ifndef PILAARREGLO_H
#define PILAARREGLO_H

#include "pila.h"

class PilaArreglo : public Pila
{
	private:
    	int datos[5];
    	int tope;
    
    public:
		void inicializar();
	    void insertar(int valor);
	    void eliminar();
	    void mostrar();
};

#endif
