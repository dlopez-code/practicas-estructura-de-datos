#include <iostream>
#include "Burbuja.h"
using namespace std;
#define MAX 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
    int n;
	int i = 0;
    //numeros enteros
    int numeros[MAX];
    int *pNumeros = numeros;

    cout<<"Ingrese la cantidad de numeros a ordenar: ";
    cin>>n;

    for(i=0; i<n; i++){
        cout<<"Ingresa el numero "<<i + 1<<": ";
        cin>>*(pNumeros + i);
    }

    burbujaInt(pNumeros, n);

    cout<<"Los numeros ordenados son: ";
    for(i=0; i<n; i++){
    	cout<<*(pNumeros + i)<<" ";	
	} 
    cout<<"\n\n";


    //caracteres
    char caracteres[MAX];
    char *pChar = caracteres;

    cout<<"Ingrese la cantidad de caracteres a ordenar: ";
    cin>>n;

    for(i=0; i<n; i++) {
        cout<<"Ingresa la letra "<<i + 1<<": ";
        cin>>*(pChar + i);
    }

    burbujaChar(pChar, n);

    cout<<"Los caracteres ordenados son: ";
    for(i=0; i<n; i++){
    	cout<<*(pChar + i)<<" ";	
	} 
    cout<<"\n\n";


    //estudiantes
    Estudiante alumnos[MAX];
    Estudiante *pAlum = alumnos;

    cout<<"Ingrese la cantidad de alumnos a registrar: ";
    cin>>n;

    for(i = 0; i < n; i++){
        cout<<"Nombre del estudiante "<< i + 1<<": ";
        cin>>(pAlum + i)->nombre;
        cout<<"Calificacion de "<<(pAlum + i)->nombre<<": ";
        cin>>(pAlum + i)->calificacion;
    }

    burbujaEst(pAlum, n);

    cout<<"\nEstudiantes ordenados por calificacion:\n";
    for(i = 0; i < n; i++){
        cout<<(pAlum + i)->nombre<<" -> "<<(pAlum + i)->calificacion<<endl;
    }

    return 0;
}