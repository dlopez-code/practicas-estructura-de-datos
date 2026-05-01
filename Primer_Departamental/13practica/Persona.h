#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std; //String necesita esto

class Persona{
	public:
		string nombre, ap, am, genero;
		int edad;
		
		void capturar();
    	void mostrar();
};

#endif