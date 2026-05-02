#include "ListaLibreria.h"
#include <iostream>
using namespace std;

//metodo para insertar un elemento a la lista
void ListaLibreria::insertar(int valor){
    lista.push_back(valor);
    cout<<"Elemento insertado\n";
}

//metodo para eliminar un elemento de la lista
void ListaLibreria::eliminar(){
    if(lista.empty()){
        cout<<"La lista esta vacia\n";
        return;
    }

    cout<<"Elemento eliminado: "<<lista.back()<<endl;
    lista.pop_back();
}

//metodo para mostrar los elementos en la lista
void ListaLibreria::mostrar(){
    if(lista.empty()){
        cout << "La lista esta vacia\n";
        return;
    }

    cout <<"Elementos:\n";
    for(int x : lista){
        cout<<x<< " ";
    }
    cout<<endl;
} //Error: faltaba cerrar el metodo

//metodo para ordenar los elementos de la lista
void ListaLibreria::ordenarBurbuja(){
    if(lista.empty()){
        cout << "La lista esta vacia\n";
        return;
    }

    for(auto i = lista.begin(); i != lista.end(); i++){
        auto j = lista.begin();
        auto siguiente = j;
        ++siguiente;

        while(siguiente != lista.end()){
            if(*j > *siguiente){
                int temp = *j;
                *j = *siguiente;
                *siguiente = temp;
            }
            ++j;
            ++siguiente;
        }
    }
    cout << "Lista ordenada con burbuja\n";
}