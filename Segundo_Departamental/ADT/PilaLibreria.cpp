#include "PilaLibreria.h"
#include <iostream>
using namespace std;

//metodo para insertar un valor a la pila
void PilaLibreria::insertar(int valor){
    pila.push(valor);
    cout<<"Elemento insertado\n";
}

//metodo para eliminar un valor de la pila
void PilaLibreria::eliminar(){
	//revisar si la pila esta vacia
    if(pila.empty()){
        cout<<"La pila esta vacia\n";
        return;
    }

    cout<<"Elemento eliminado: "<<pila.top()<<endl; //MOSTRAR ULTIMO ELEMENTO
    pila.pop(); //QUITAR ELEMENTO
}

//metodo para mostrar los elementos de la pila
void PilaLibreria::mostrar(){

    if(pila.empty()){
        cout<<"La pila esta vacia\n";
        return;
    }

    //crear copia para no borrar los elementos de la pila original
    stack<int> aux = pila;

    cout<<"Elementos: "<<endl;
    while(!aux.empty()){ //mientras la pila no está vacía muestra el ultimo elemento y luego lo borra
        cout<<aux.top()<<" "; //hasta que no quede ningun elemento y se muestren todos
        aux.pop();
    }
    cout << endl;
}
