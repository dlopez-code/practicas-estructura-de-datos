#ifndef COLAARREGLO_H
#define COLAARREGLO_H

#include "cola.h" //Error: #include <cola.h>

class ColaArreglo : public Cola{
	private:
    	int datos[5];
    	int frente;
    	int final;
    
    public:
		void inicializar();
	    void insertar(int valor);
	    void eliminar();
	    void mostrar();
};

#endif