#ifndef ARBOL_H
#define ARBOL_H

#include <string>
#include "ConexionArbol.h"
using namespace std;

class Arbol{
private:
    string nodos[20];
    string aristas[20];
    ConexionArbol conexiones[50];

    int totalNodos;
    int totalAristas;
    int totalConexiones;

public:
    Arbol();

    void limpiar();
    bool existeNodo(string nodo);
    bool existeArista(string arista);
    bool esHijoDeAlguien(string nodo);
    int indiceNodo(string nodo);

    string obtenerTexto(string linea);
    int obtenerNumero(string linea);
    void cargarLista(string linea, string arreglo[], int &total);

    void cargarJSON();
    void guardarJSON();
    void mostrarArbol();

    void agregarNodo();
    void agregarArista();
    void agregarConexion();

    void mejorRuta(int tipo);
};

#endif
