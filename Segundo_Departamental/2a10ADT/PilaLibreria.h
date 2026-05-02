#ifndef PILALIBRERIA_H
#define PILALIBRERIA_H
#include "pila.h"
#include <stack>
using namespace std;

class PilaLibreria : public Pila{
	private:
    	stack<int> pila;
    	
	public:
	    void insertar(int valor);
	    void eliminar();
	    void mostrar();
};

#endif