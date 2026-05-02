#ifndef ADT_H
#define ADT_H

class ADT {
public:
    virtual void insertar(int) = 0;
    virtual void eliminar() = 0;
    virtual void mostrar() = 0;
};

#endif