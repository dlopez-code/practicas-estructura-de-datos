#include "Numeros.h"
using namespace std;

int Numeros::suma(int numeros[]){
	int suma = 0;

	for(int i=0; i<5; i++){
		suma = suma+numeros[i];
	}
	return suma;
}

float Numeros::promedio(int numeros[]){
	int total = suma(numeros); //La variable y el método tenían el mismo nombre, no compilaba
	return (float)total/5;
}

int Numeros::max(int numeros[]){
	int mayor = numeros[0];

	for(int i=1; i<5; i++){
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
	}
	return mayor;
}

int Numeros::min(int numeros[]){
	int menor = numeros[0];

	for(int i=1; i<5; i++){
		if(numeros[i] < menor){
			menor = numeros[i];
		}
	}
	return menor;
}