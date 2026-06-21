#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Arbol.h"

using namespace std;

Arbol::Arbol(){
    totalNodos = 0;
    totalAristas = 0;
    totalConexiones = 0;
}

void Arbol::limpiar(){
    totalNodos = 0;
    totalAristas = 0;
    totalConexiones = 0;
}

bool Arbol::existeNodo(string nodo){
    for(int i = 0; i < totalNodos; i++){
        if(nodos[i] == nodo){
            return true;
        }
    }
    return false;
}

bool Arbol::existeArista(string arista){
    for(int i = 0; i < totalAristas; i++){
        if(aristas[i] == arista){
            return true;
        }
    }
    return false;
}

bool Arbol::esHijoDeAlguien(string nodo){
    for(int i = 0; i < totalConexiones; i++){
        if(conexiones[i].nodoHijo == nodo){
            return true;
        }
    }
    return false;
}

int Arbol::indiceNodo(string nodo){
    for(int i = 0; i < totalNodos; i++){
        if(nodos[i] == nodo){
            return i;
        }
    }
    return -1;
}

string Arbol::obtenerTexto(string linea){
    int dosPuntos = linea.find(":");
    int comilla1 = linea.find("\"", dosPuntos);
    int comilla2 = linea.find("\"", comilla1 + 1);

    if(comilla1 == -1 || comilla2 == -1){
        return "";
    }

    return linea.substr(comilla1 + 1, comilla2 - comilla1 - 1);
}

int Arbol::obtenerNumero(string linea){
    int dosPuntos = linea.find(":");
    string numero = "";

    for(int i = dosPuntos + 1; i < linea.length(); i++){
        if(linea[i] >= '0' && linea[i] <= '9'){
            numero = numero + linea[i];
        }
    }

    return atoi(numero.c_str());
}

void Arbol::cargarLista(string linea, string arreglo[], int &total){
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

void Arbol::cargarJSON(){
    limpiar();

    ifstream archivo("arbol.json");

    if(!archivo){
        cout << "No se pudo abrir arbol.json" << endl;
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
            ConexionArbol c;

            getline(archivo, linea);
            c.nodoPadre = obtenerTexto(linea);

            getline(archivo, linea);
            c.nodoHijo = obtenerTexto(linea);

            getline(archivo, linea);
            c.aristaConexion = obtenerTexto(linea);

            getline(archivo, linea);
            c.nivel = obtenerNumero(linea);

            getline(archivo, linea);
            c.costo = obtenerNumero(linea);

            if(existeNodo(c.nodoPadre) && existeNodo(c.nodoHijo) && existeArista(c.aristaConexion)){
                if(!esHijoDeAlguien(c.nodoHijo)){
                    conexiones[totalConexiones] = c;
                    totalConexiones++;
                }else{
                    cout << "Una conexion no se agrego porque ese hijo ya tiene padre." << endl;
                }
            }else{
                cout << "Una conexion no se agrego porque tiene datos incorrectos." << endl;
            }
        }
    }

    archivo.close();
    cout << "Arbol cargado correctamente desde arbol.json" << endl;
}

void Arbol::mostrarArbol(){
    cout << endl;
    cout << "NODOS DEL ARBOL:" << endl;

    for(int i = 0; i < totalNodos; i++){
        cout << nodos[i] << endl;
    }

    cout << endl;
    cout << "ARISTAS:" << endl;

    for(int i = 0; i < totalAristas; i++){
        cout << aristas[i] << endl;
    }

    cout << endl;
    cout << "RELACIONES PADRE - HIJO:" << endl;

    for(int i = 0; i < totalConexiones; i++){
        cout << conexiones[i].nodoPadre << " ---> " << conexiones[i].nodoHijo;
        cout << " / Arista: " << conexiones[i].aristaConexion;
        cout << " / Nivel: " << conexiones[i].nivel;
        cout << " / Costo: " << conexiones[i].costo << endl;
    }
}

void Arbol::agregarNodo(){
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

void Arbol::agregarArista(){
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

void Arbol::agregarConexion(){
    if(totalConexiones >= 50){
        cout << "Ya no se pueden agregar mas conexiones." << endl;
        return;
    }

    ConexionArbol c;

    cout << "Nodo padre: ";
    cin >> c.nodoPadre;

    cout << "Nodo hijo: ";
    cin >> c.nodoHijo;

    cout << "Arista de conexion: ";
    cin >> c.aristaConexion;

    cout << "Nivel: ";
    cin >> c.nivel;

    cout << "Costo: ";
    cin >> c.costo;

    if(existeNodo(c.nodoPadre) && existeNodo(c.nodoHijo) && existeArista(c.aristaConexion)){
        if(!esHijoDeAlguien(c.nodoHijo)){
            conexiones[totalConexiones] = c;
            totalConexiones++;
            cout << "Conexion agregada." << endl;
        }else{
            cout << "No se agrego la conexion porque ese hijo ya tiene padre." << endl;
        }
    }else{
        cout << "No se agrego la conexion porque el nodo o la arista no existe." << endl;
    }
}

void Arbol::guardarJSON(){
    ofstream archivo("arbol.json");

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
        archivo << "        \"nodoPadre\": \"" << conexiones[i].nodoPadre << "\"," << endl;
        archivo << "        \"nodoHijo\": \"" << conexiones[i].nodoHijo << "\"," << endl;
        archivo << "        \"aristaConexion\": \"" << conexiones[i].aristaConexion << "\"," << endl;
        archivo << "        \"nivel\": " << conexiones[i].nivel << "," << endl;
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
    cout << "Archivo arbol.json guardado correctamente." << endl;
}

void Arbol::mejorRuta(int tipo){
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
            if(conexiones[i].nodoPadre == nodos[actual]){
                int vecino = indiceNodo(conexiones[i].nodoHijo);
                int peso;

                if(tipo == 1){
                    peso = conexiones[i].nivel;
                }else{
                    peso = conexiones[i].costo;
                }

                if(vecino != -1 && distancia[actual] + peso < distancia[vecino]){
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
        cout << endl << "Nivel total: " << distancia[destino] << endl;
    }else{
        cout << endl << "Costo total: " << distancia[destino] << endl;
    }
}
