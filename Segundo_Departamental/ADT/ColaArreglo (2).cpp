#include "ColaArreglo.h"
#include <iostream>
using namespace std;

//Definir el tamanio del arreglo
//void ColaArreglo::defTamanio(){
	
//	cout<<"Ingresa el tamanio de la cola: ";
//	cin>>tamCola;
//}
	
	
//Inicializar la cola
void ColaArreglo::inicializar(){
    frente = -1; //los indices empiezan con 0 por lo que -1 indica que esta totalmente vacia
    final = -1;
}

//Insertar un elemento
void ColaArreglo::insertar(int valor){

    //Verificar si la cola está llena
    if(final == 4){
        cout<<"La cola esta llena\n";
        return;
    }

    //Primer elemento insertado
    if(frente == -1){
        frente = 0;
    }
    final++;
    datos[final] = valor;
    cout<<"Elemento insertado\n";
}

//Eliminar elemento de la cola
void ColaArreglo::eliminar(){

    //Cola vacía
    if(frente == -1){
        cout<<"La cola esta vacia\n";
        return;
    }
    cout<<"Elemento eliminado: "<<datos[frente]<<endl;

    //si queda vacía reiniciamos la cola
    if(frente==final){
        frente= -1;
        final= -1;
    }else{
        frente++;
    }
}

//Mostrar el contenido de la cola
void ColaArreglo::mostrar(){

    if(frente == -1){
        cout<<"La cola esta vacia\n";
        return;
    }

    cout << "Elementos de la cola:\n";
	//recorrer el arreglo para mostrar elementos
    for(int i = frente;i <= final;i++){
        cout<<datos[i]<< " ";
    }
    cout << endl;
}