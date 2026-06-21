#include <iostream>
#include <fstream>
#include <string>
#include "ColaLibreria.h"
#include "PilaLibreria.h"
#include "ListaLibreria.h"

using namespace std;

template <typename T>
void guardarConFormato(T &estructura, string nombreEstructura){
    int formato;
    cout << "\nFormato de archivo:\n";
    cout << "1. TXT\n2. CSV\n3. JSON\n4. XML\n";
    cout << "Opcion: ";
    cin >> formato;

    string nombreArchivo = nombreEstructura;
    for(int i=0; i<nombreArchivo.size(); i++){
        nombreArchivo[i] = tolower(nombreArchivo[i]);
    }

    if(formato == 1){
        nombreArchivo += ".txt";
        ofstream archivo(nombreArchivo);
        archivo << "Elementos de la " << nombreEstructura << ": ";
        estructura.guardarArchivo(archivo);
        archivo << "\n";
        archivo.close();
        cout << "Guardado en " << nombreArchivo << endl;
    }
    else if(formato == 2){
        nombreArchivo += ".csv";
        ofstream archivo(nombreArchivo);
        archivo << "Elementos\n";
        estructura.guardarArchivo(archivo);
        archivo << "\n";
        archivo.close();
        cout << "Guardado en " << nombreArchivo << endl;
    }
    else if(formato == 3){
        nombreArchivo += ".json";
        ofstream archivo(nombreArchivo);
        archivo << "{\n";
        archivo << "  \"" << nombreEstructura << "\": [";
        estructura.guardarArchivo(archivo);
        archivo << "]\n";
        archivo << "}\n";
        archivo.close();
        cout << "Guardado en " << nombreArchivo << endl;
    }
    else if(formato == 4){
        nombreArchivo += ".xml";
        ofstream archivo(nombreArchivo);
        archivo << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl;
        archivo << "<" << nombreEstructura << ">" << endl;
        archivo << "    <Elementos>";
        estructura.guardarArchivo(archivo);
        archivo << "</Elementos>" << endl;
        archivo << "</" << nombreEstructura << ">" << endl;
        archivo.close();
        cout << "Guardado en " << nombreArchivo << endl;
    }
    else{
        cout << "Opcion invalida\n";
    }
}

int main(int argc, char** argv){

    ColaLibreria colaLib;
    PilaLibreria pilaLib;
    ListaLibreria listaLib;

    int opcion, op, valor;

    do {
        cout << "\n===== MENU PRINCIPAL =====\n";
        cout << "1. Cola (Libreria)\n";
        cout << "2. Pila (Libreria)\n";
        cout << "3. Lista (Libreria)\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){

        // ===== COLA LIBRERIA =====
        case 1:
            do {
                cout << "\n--- COLA (LIBRERIA) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n4. Guardar en archivo\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    colaLib.insertar(valor);
                }
                else if(op == 2){
                    colaLib.eliminar();
                }
                else if(op == 3){
                    colaLib.mostrar();
                }
                else if(op == 4){
                    guardarConFormato(colaLib, "Cola");
                }

            } while(op != 0);
            break;

        // ===== PILA LIBRERIA =====
        case 2:
            do {
                cout << "\n--- PILA (LIBRERIA) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n4. Guardar en archivo\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    pilaLib.insertar(valor);
                }
                else if(op == 2){
                    pilaLib.eliminar();
                }
                else if(op == 3){
                    pilaLib.mostrar();
                }
                else if(op == 4){
                    guardarConFormato(pilaLib, "Pila");
                }

            } while(op != 0);
            break;

        // ===== LISTA LIBRERIA =====
        case 3:
            do {
                cout << "\n--- LISTA (LIBRERIA) ---\n";
                cout << "1. Insertar\n2. Eliminar\n3. Mostrar\n4. Ordenar (Burbuja)\n5. Guardar en archivo\n0. Regresar\n";
                cout << "Opcion: ";
                cin >> op;

                if(op == 1){
                    cout << "Valor: ";
                    cin >> valor;
                    listaLib.insertar(valor);
                }
                else if(op == 2){
                    listaLib.eliminar();
                }
                else if(op == 3){
                    listaLib.mostrar();
                }
                else if(op == 4){
                    listaLib.ordenarBurbuja();
                }
                else if(op == 5){
                    guardarConFormato(listaLib, "Lista");
                }

            } while(op != 0);
            break;

        case 4:
            cout << "Saliendo del programa...\n";
            break;

        default:
            cout << "Opcion invalida\n";
        }

    } while(opcion != 4);

    cout << "Programa terminado\n";
    return 0;
}