#ifndef AUTO_H
#define AUTO_H

class Auto {
public:
    float precio;
    int anio;
    Auto* siguiente; // puntero al mismo tipo de dato

    void capturar();
    void mostrar();
};

#endif