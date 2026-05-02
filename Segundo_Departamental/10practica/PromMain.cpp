#include <iostream>
#include "PromPunteros.h"
using namespace std;

int main() {
	EntradaDatos conjunto1;
	Suma suma1;
	Promedio promedio1;
	ImpresionCalculos impresion1;
	
	conjunto1.Ingresar();
	double s  = suma1.CalcSuma(&conjunto1);
    double p  = promedio1.CalcProm(&s);
	impresion1.ImpresionCalc(&conjunto1, p);
	
	return 0;
}