#ifndef MERGESORT_H
#define MERGESORT_H
#include "Estudiante.h"
#define MAX 100

// Numeros enteros
void mezclarInt(int *arr, int inicio, int mitad, int fin);
void mergeSortInt(int *arr, int inicio, int fin);

// Caracteres
void mezclarChar(char *arr, int inicio, int mitad, int fin);
void mergeSortChar(char *arr, int inicio, int fin);

// Estudiantes
void mezclarEst(Estudiante *arr, int inicio, int mitad, int fin);
void mergeSortEst(Estudiante *arr, int inicio, int fin);

#endif