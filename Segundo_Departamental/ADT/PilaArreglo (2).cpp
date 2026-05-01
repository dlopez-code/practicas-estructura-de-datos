#include "PilaArreglo.h"
#include <iostream>
using namespace std;

//Inicializar la 
void PilaArreglo::inicializar(){
	tope = -1; // -1 indica que la pila está vacía    
}

//Insertar un elemento
void PilaArreglo::insertar(int valor){

    //Verificar si la pila está llena
    if (tope == 4) {
        cout << "La pila esta llena\n";
        return;
    }
    
tope++;           // Incrementamos el tope
    datos[tope] = valor; // Guardamos el valor en la nueva posición
    cout << "Elemento " << valor << " insertado en la pila\n";
}

//Eliminar elemento de la pila
void PilaArreglo::eliminar(){
	
	if (tope == -1) {
     	   cout << "La pila esta vacia\n";
    	    return;
	}

    cout << "Elemento eliminado: " << datos[tope] << endl;
    tope--; // Simplemente bajamos el índice del tope
}

//Mostrar el contenido de la cola
void PilaArreglo::mostrar() {
    if (tope == -1) {
        cout << "La pila esta vacia\n";
        return;
    }

    cout << "Elementos de la pila:\n";
    for (int i = tope; i >= 0; i--) {
        cout << datos[i] << "\n";
    }
}