#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

class Persona {
public:
    string nombre, ap, am, genero;
    int edad;
    Persona* siguiente; // puntero al mismo tipo de dato

    void capturar();
    void mostrar();
};

#endif