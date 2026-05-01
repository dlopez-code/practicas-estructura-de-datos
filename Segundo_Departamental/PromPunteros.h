#ifndef PROMPUNTEROS_H
#define PROMPUNTEROS_H

class EntradaDatos {
public:
    int n[5];
    void Ingresar(); 
};

class Suma {
public:
    double CalcSuma(EntradaDatos* obj); 
};

class Promedio {
public:
    double CalcProm(double* sum); 
};

class ImpresionCalculos {
public:
    void ImpresionCalc(EntradaDatos* obj, double prom); 
};

#endif