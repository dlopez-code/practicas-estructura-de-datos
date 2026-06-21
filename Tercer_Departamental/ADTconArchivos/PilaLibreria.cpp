#include "PilaLibreria.h"
#include <iostream>
using namespace std;

void PilaLibreria::insertar(int valor){
    pila.push(valor);
    cout<<"Elemento insertado\n";
}

void PilaLibreria::eliminar(){
    if(pila.empty()){
        cout<<"La pila esta vacia\n";
        return;
    }

    cout<<"Elemento eliminado: "<<pila.top()<<endl;
    pila.pop();
}

void PilaLibreria::mostrar(){

    if(pila.empty()){
        cout<<"La pila esta vacia\n";
        return;
    }

    stack<int> aux = pila;

    cout<<"Elementos: "<<endl;
    while(!aux.empty()){
        cout<<aux.top()<<" ";
        aux.pop();
    }
    cout << endl;
}

void PilaLibreria::guardarArchivo(ofstream &archivo){
    stack<int> aux = pila;

    while(!aux.empty()){
        archivo << aux.top();
        aux.pop();
        if(!aux.empty()){
            archivo << ",";
        }
    }
}