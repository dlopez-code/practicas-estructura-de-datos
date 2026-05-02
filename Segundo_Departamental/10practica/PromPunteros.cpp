#include <iostream>
#include "PromPunteros.h"
using namespace std;

void EntradaDatos::Ingresar() {
    cout << "Ingresa tus 5 valores: " << endl;
    for (int i=0; i<5; i++){
    	cin>> *(n + i);
	}
}

double Suma::CalcSuma(EntradaDatos* obj) {
	double total = 0;
    for (int i=0; i<5; i++){
    	total+= *(obj->n + i);
	}
	return total;
}

double Promedio::CalcProm(double* sum) {
    return (*sum)/5.0;
}

void ImpresionCalculos::ImpresionCalc(EntradaDatos* obj, double prom) {
		cout<<"\nNumeros ingresados: "<<endl;
		 for (int i=0; i<5; i++){
    		cout<< *(obj->n + i)<<" ";
	}
		cout<<"\nPromedio de los numeros: "<<prom<<endl;
}