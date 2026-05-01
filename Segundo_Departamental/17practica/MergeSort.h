#ifndef MERGESORT_H
#define MERGESORT_H
#include "Estudiante.h"
#define MAX 100

//numeros enterois
void mezclarInt(int arr[], int inicio, int mitad, int fin);
void mergeSortInt(int arr[], int inicio, int fin);

//caracteres
void mezclarChar(char arr[], int inicio, int mitad, int fin);
void mergeSortChar(char arr[], int inicio, int fin);

//nuevo tipo de dato (estudiante)
void mezclarEst(Estudiante arr[], int inicio, int mitad, int fin);
void mergeSortEst(Estudiante arr[], int inicio, int fin);

#endif