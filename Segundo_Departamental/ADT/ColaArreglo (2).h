#ifndef COLAARREGLO_H
#define COLAARREGLO_H

#include "cola.h" //Error: #include <cola.h>

class ColaArreglo : public Cola{
	private:
		int tamCola;
    //	int datos[tamCola];
    	int frente;
    	int final;
    
    public:
    	void defTamanio();
		void inicializar();
	    void insertar(int valor);
	    void eliminar();
	    void mostrar();
	    
};

#endif