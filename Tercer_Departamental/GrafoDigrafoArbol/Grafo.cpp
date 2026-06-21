#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Grafo.h"

using namespace std;

Grafo::Grafo(){
    totalNodos = 0;
    totalAristas = 0;
    totalConexiones = 0;
}

void Grafo::limpiar(){
    totalNodos = 0;
    totalAristas = 0;
    totalConexiones = 0;
}

bool Grafo::existeNodo(string nodo){
    for(int i = 0; i < totalNodos; i++){
        if(nodos[i] == nodo){
            return true;
        }
    }
    return false;
}

bool Grafo::existeArista(string arista){
    for(int i = 0; i < totalAristas; i++){
        if(aristas[i] == arista){
            return true;
        }
    }
    return false;
}

int Grafo::indiceNodo(string nodo){
    for(int i = 0; i < totalNodos; i++){
        if(nodos[i] == nodo){
            return i;
        }
    }
    return -1;
}

string Grafo::obtenerTexto(string linea){
    int dosPuntos = linea.find(":");
    int comilla1 = linea.find("\"", dosPuntos);
    int comilla2 = linea.find("\"", comilla1 + 1);

    if(comilla1 == -1 || comilla2 == -1){
        return "";
    }

    return linea.substr(comilla1 + 1, comilla2 - comilla1 - 1);
}

int Grafo::obtenerNumero(string linea){
    int dosPuntos = linea.find(":");
    string numero = "";

    for(int i = dosPuntos + 1; i < linea.length(); i++){
        if(linea[i] >= '0' && linea[i] <= '9'){
            numero = numero + linea[i];
        }
    }

    return atoi(numero.c_str());
}

void Grafo::cargarLista(string linea, string arreglo[], int &total){
    int posicion = 0;

    while(true){
        int comilla1 = linea.find("\"", posicion);

        if(comilla1 == -1){
            break;
        }

        int comilla2 = linea.find("\"", comilla1 + 1);

        if(comilla2 == -1){
            break;
        }

        string dato = linea.substr(comilla1 + 1, comilla2 - comilla1 - 1);

        if(dato != "nodos" && dato != "aristas"){
            arreglo[total] = dato;
            total++;
        }

        posicion = comilla2 + 1;
    }
}

void Grafo::cargarJSON(){
    limpiar();

    ifstream archivo("grafo.json");

    if(!archivo){
        cout << "No se pudo abrir grafo.json" << endl;
        return;
    }

    string linea;

    while(getline(archivo, linea)){
        if(linea.find("\"nodos\"") != -1){
            cargarLista(linea, nodos, totalNodos);
        }

        if(linea.find("\"aristas\"") != -1){
            cargarLista(linea, aristas, totalAristas);
        }

        if(linea.find("\"conexionNodo2Nodo\"") != -1){
            ConexionGrafo c;

            getline(archivo, linea);
            c.nodoInicial = obtenerTexto(linea);

            getline(archivo, linea);
            c.nodoFinal = obtenerTexto(linea);

            getline(archivo, linea);
            c.aristaConexion = obtenerTexto(linea);

            getline(archivo, linea);
            c.tiempo = obtenerNumero(linea);

            getline(archivo, linea);
            c.costo = obtenerNumero(linea);

            if(existeNodo(c.nodoInicial) && existeNodo(c.nodoFinal) && existeArista(c.aristaConexion)){
                conexiones[totalConexiones] = c;
                totalConexiones++;
            }else{
                cout << "Una conexion no se agrego porque tiene datos incorrectos." << endl;
            }
        }
    }

    archivo.close();
    cout << "Grafo cargado correctamente desde grafo.json" << endl;
}

void Grafo::mostrarGrafo(){
    cout << endl;
    cout << "NODOS:" << endl;

    for(int i = 0; i < totalNodos; i++){
        cout << nodos[i] << endl;
    }

    cout << endl;
    cout << "ARISTAS:" << endl;

    for(int i = 0; i < totalAristas; i++){
        cout << aristas[i] << endl;
    }

    cout << endl;
    cout << "CONEXIONES DEL GRAFO:" << endl;

    for(int i = 0; i < totalConexiones; i++){
        cout << conexiones[i].nodoInicial << " <--> " << conexiones[i].nodoFinal;
        cout << " / Arista: " << conexiones[i].aristaConexion;
        cout << " / Tiempo: " << conexiones[i].tiempo;
        cout << " / Costo: " << conexiones[i].costo << endl;
    }
}

void Grafo::agregarNodo(){
    if(totalNodos >= 20){
        cout << "Ya no se pueden agregar mas nodos." << endl;
        return;
    }

    string nodo;
    cout << "Nombre del nodo: ";
    cin >> nodo;

    if(existeNodo(nodo)){
        cout << "Ese nodo ya existe." << endl;
    }else{
        nodos[totalNodos] = nodo;
        totalNodos++;
        cout << "Nodo agregado." << endl;
    }
}

void Grafo::agregarArista(){
    if(totalAristas >= 20){
        cout << "Ya no se pueden agregar mas aristas." << endl;
        return;
    }

    string arista;
    cout << "Nombre de la arista: ";
    cin >> arista;

    if(existeArista(arista)){
        cout << "Esa arista ya existe." << endl;
    }else{
        aristas[totalAristas] = arista;
        totalAristas++;
        cout << "Arista agregada." << endl;
    }
}

void Grafo::agregarConexion(){
    if(totalConexiones >= 50){
        cout << "Ya no se pueden agregar mas conexiones." << endl;
        return;
    }

    ConexionGrafo c;

    cout << "Nodo inicial: ";
    cin >> c.nodoInicial;

    cout << "Nodo final: ";
    cin >> c.nodoFinal;

    cout << "Arista de conexion: ";
    cin >> c.aristaConexion;

    cout << "Tiempo: ";
    cin >> c.tiempo;

    cout << "Costo: ";
    cin >> c.costo;

    if(existeNodo(c.nodoInicial) && existeNodo(c.nodoFinal) && existeArista(c.aristaConexion)){
        conexiones[totalConexiones] = c;
        totalConexiones++;
        cout << "Conexion agregada." << endl;
    }else{
        cout << "No se agrego la conexion porque el nodo o la arista no existe." << endl;
    }
}

void Grafo::guardarJSON(){
    ofstream archivo("grafo.json");

    archivo << "{" << endl;

    archivo << "  \"nodos\": [";
    for(int i = 0; i < totalNodos; i++){
        archivo << "\"" << nodos[i] << "\"";

        if(i < totalNodos - 1){
            archivo << ",";
        }
    }
    archivo << "]," << endl;

    archivo << "  \"aristas\": [";
    for(int i = 0; i < totalAristas; i++){
        archivo << "\"" << aristas[i] << "\"";

        if(i < totalAristas - 1){
            archivo << ",";
        }
    }
    archivo << "]," << endl;

    archivo << "  \"rutas\": [" << endl;

    for(int i = 0; i < totalConexiones; i++){
        archivo << "    {" << endl;
        archivo << "      \"conexionNodo2Nodo\": {" << endl;
        archivo << "        \"nodoInicial\": \"" << conexiones[i].nodoInicial << "\"," << endl;
        archivo << "        \"nodoFinal\": \"" << conexiones[i].nodoFinal << "\"," << endl;
        archivo << "        \"aristaConexion\": \"" << conexiones[i].aristaConexion << "\"," << endl;
        archivo << "        \"tiempo\": " << conexiones[i].tiempo << "," << endl;
        archivo << "        \"costo\": " << conexiones[i].costo << endl;
        archivo << "      }" << endl;
        archivo << "    }";

        if(i < totalConexiones - 1){
            archivo << ",";
        }

        archivo << endl;
    }

    archivo << "  ]" << endl;
    archivo << "}" << endl;

    archivo.close();
    cout << "Archivo grafo.json guardado correctamente." << endl;
}

void Grafo::mejorRuta(int tipo){
    string inicio, fin;
    cout << "Nodo inicial: ";
    cin >> inicio;
    cout << "Nodo final: ";
    cin >> fin;

    int origen = indiceNodo(inicio);
    int destino = indiceNodo(fin);

    if(origen == -1 || destino == -1){
        cout << "Uno de los nodos no existe." << endl;
        return;
    }

    int distancia[20];
    int visitado[20];
    int anterior[20];
    int infinito = 999999;

    for(int i = 0; i < totalNodos; i++){
        distancia[i] = infinito;
        visitado[i] = 0;
        anterior[i] = -1;
    }

    distancia[origen] = 0;

    for(int vuelta = 0; vuelta < totalNodos; vuelta++){
        int actual = -1;
        int menor = infinito;

        for(int i = 0; i < totalNodos; i++){
            if(visitado[i] == 0 && distancia[i] < menor){
                menor = distancia[i];
                actual = i;
            }
        }

        if(actual == -1){
            break;
        }

        visitado[actual] = 1;

        for(int i = 0; i < totalConexiones; i++){
            int vecino = -1;

            if(conexiones[i].nodoInicial == nodos[actual]){
                vecino = indiceNodo(conexiones[i].nodoFinal);
            }else if(conexiones[i].nodoFinal == nodos[actual]){
                vecino = indiceNodo(conexiones[i].nodoInicial);
            }

            if(vecino != -1){
                int peso;
                if(tipo == 1){
                    peso = conexiones[i].tiempo;
                }else{
                    peso = conexiones[i].costo;
                }

                if(distancia[actual] + peso < distancia[vecino]){
                    distancia[vecino] = distancia[actual] + peso;
                    anterior[vecino] = actual;
                }
            }
        }
    }

    if(distancia[destino] == infinito){
        cout << "No existe una ruta entre esos nodos." << endl;
        return;
    }

    int camino[20];
    int totalCamino = 0;
    int aux = destino;

    while(aux != -1){
        camino[totalCamino] = aux;
        totalCamino++;
        aux = anterior[aux];
    }

    cout << "Mejor ruta: ";
    for(int i = totalCamino - 1; i >= 0; i--){
        cout << nodos[camino[i]];
        if(i > 0){
            cout << " -> ";
        }
    }

    if(tipo == 1){
        cout << endl << "Tiempo total: " << distancia[destino] << endl;
    }else{
        cout << endl << "Costo total: " << distancia[destino] << endl;
    }
}
