#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Estudiante.h"
#define MAX 100

// Numeros enteros
int particionInt(int arr[], int inicio, int fin);
void quickSortInt(int arr[], int inicio, int fin);

// Caracteres
int particionChar(char arr[], int inicio, int fin);
void quickSortChar(char arr[], int inicio, int fin);

// Nuevo tipo de dato (Estudiante)
int particionEst(Estudiante arr[], int inicio, int fin);
void quickSortEst(Estudiante arr[], int inicio, int fin);

#endif