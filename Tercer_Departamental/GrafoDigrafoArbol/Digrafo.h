#ifndef DIGRAFO_H
#define DIGRAFO_H

#include <string>
#include "ConexionGrafo.h"
using namespace std;

class Digrafo{
private:
    string nodos[20];
    string aristas[20];
    ConexionGrafo conexiones[50];

    int totalNodos;
    int totalAristas;
    int totalConexiones;

public:
    Digrafo();

    void limpiar();
    bool existeNodo(string nodo);
    bool existeArista(string arista);
    int indiceNodo(string nodo);

    string obtenerTexto(string linea);
    int obtenerNumero(string linea);
    void cargarLista(string linea, string arreglo[], int &total);

    void cargarJSON();
    void guardarJSON();
    void mostrarDigrafo();

    void agregarNodo();
    void agregarArista();
    void agregarConexion();

    void mejorRuta(int tipo);
};

#endif
