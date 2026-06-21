#include "ListaLibreria.h"
#include <iostream>
using namespace std;

void ListaLibreria::insertar(int valor){
    lista.push_back(valor);
    cout<<"Elemento insertado\n";
}

void ListaLibreria::eliminar(){
    if(lista.empty()){
        cout<<"La lista esta vacia\n";
        return;
    }

    cout<<"Elemento eliminado: "<<lista.back()<<endl;
    lista.pop_back();
}

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
}

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

void ListaLibreria::guardarArchivo(ofstream &archivo){
    int n = lista.size();
    int i = 0;

    for(int x : lista){
        archivo << x;
        i++;
        if(i < n){
            archivo << ",";
        }
    }
}