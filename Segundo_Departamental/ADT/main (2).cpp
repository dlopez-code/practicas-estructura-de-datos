#include <iostream>
#include "ColaArreglo.h"
#include "PilaLibreria.h"
#include "PilaArreglo.h"
#include "ListaArreglo.h"

using namespace std;

int main(){

    ColaArreglo cola;
    PilaLibreria pila;
	PilaArreglo pilaA;
	ListaArreglo lista;
    int opcionGeneral;
    int opcion, valor;

    cola.inicializar();

    // MENÚ GENERAL
    for(int i = 0; i < 100; i++){

        cout<<"\n===== MENU GENERAL =====\n";
        cout<<"1. Cola (Arreglo)\n";
        cout<<"2. Pila (Libreria)\n";
        cout<<"3. Pila (Arreglo)\n";
        cout<<"4. Lista (Arreglo)\n";
        cout<<"5. Salir\n";
        cout<<"Opcion: ";
        cin>>opcionGeneral;

        // ===== COLA =====
        if(opcionGeneral == 1){

            for(int j=0; j<100; j++){

                cout<<"\n--- COLA CON ARREGLO ---\n";
                cout<<"1. Insertar\n2. Eliminar\n3. Mostrar\n4. Regresar\n";
                cout<<"Opcion: ";
                cin>>opcion;

                if(opcion == 1){
                    cout<<"Valor: ";
                    cin>>valor;
                    cola.insertar(valor);
                }

                if(opcion == 2){
                    cola.eliminar();
                }

                if(opcion == 3){
                    cola.mostrar();
                }

                if(opcion == 4){
                    break; // regresar al menú general
                }
            }
        }

        // ===== PILA =====
        if(opcionGeneral == 2){

            for(int j=0; j<100; j++){

                cout<<"\n--- PILA CON LIBRERIA ---\n";
                cout<<"1. Insertar\n2. Eliminar\n3. Mostrar\n4. Regresar\n";
                cout<<"Opcion: ";
                cin>>opcion;

                if(opcion == 1){
                    cout<<"Valor: ";
                    cin>>valor;
                    pila.insertar(valor);
                }

                if(opcion == 2){
                    pila.eliminar();
                }

                if(opcion == 3){
                    pila.mostrar();
                }

                if(opcion == 4){
                    break; // regresar
                }
            }
        }
    
 	// ===== PILA =====
        if(opcionGeneral == 3){

            for(int j=0; j<100; j++){

                cout<<"\n--- PILA CON ARREGLO ---\n";
                cout<<"1. Insertar\n2. Eliminar\n3. Mostrar\n4. Regresar\n";
                cout<<"Opcion: ";
                cin>>opcion;

                if(opcion == 1){
                    cout<<"Valor: ";
                    cin>>valor;
                    pilaA.insertar(valor);
                }

                if(opcion == 2){
                    pilaA.eliminar();
                }

                if(opcion == 3){
                    pilaA.mostrar();
                }

                if(opcion == 4){
                    break; // regresar
                }
            }
        }

 	// ===== LISTA =====
        if(opcionGeneral == 3){

            for(int j=0; j<100; j++){

                cout<<"\n--- LISTA CON ARREGLO ---\n";
                cout<<"1. Insertar\n2. Eliminar\n3. Mostrar\n4. Regresar\n";
                cout<<"Opcion: ";
                cin>>opcion;

                if(opcion == 1){
                    int valor, pos;
    				cout << "Valor: ";
   			 		cin >> valor;
    				cout << "En que posicion? (0-4): ";
    				cin >> pos;
    				lista.insertar(valor, pos);
                }

                if(opcion == 2){
                    int pos;
    				cout << "Posicion a eliminar: ";
    				cin >> pos;
   					lista.eliminar(pos);
                }

                if(opcion == 3){
                    lista.mostrar();
                }

                if(opcion == 4){
                    break; // regresar
                }
            }
        }

        if(opcionGeneral == 5){
            cout<<"Saliendo del programa\n";
            break;
        }
    }


    return 0;
}