#include "PilaPuntero.h"
#include <iostream>
using namespace std;

//Constructor
PilaPuntero::PilaPuntero(){
    tope = NULL;
}

//metodo para insertar push
void PilaPuntero::insertar(int valor){
    NodoP* nuevo = new NodoP();
    nuevo->dato = valor;
    nuevo->sig = tope;
    tope = nuevo;

    cout<<"Elemento insertado\n";
}

//metodo para eliminar un elemento pop
void PilaPuntero::eliminar(){
    if(tope == NULL){
        cout<<"La pila esta vacia\n";
        return;
    }

    NodoP* aux = tope;
    cout<<"Elemento eliminado: " << aux->dato <<endl;

    tope = tope->sig;
    delete aux;
}

//metodo para mostrar los elementos
void PilaPuntero::mostrar(){
    if(tope == NULL){
        cout<<"La pila esta vacia\n";
        return;
    }

    NodoP* aux = tope;

    cout<<"Elementos:\n";
    while(aux != NULL){
        cout<< aux->dato <<" ";
        aux = aux->sig;
    }
    cout<<endl;
}