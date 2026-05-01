#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Estudiante.h"
#define MAX 100

//numeros enteros
int particionInt(int *arr, int low, int high);
void quickSortInt(int *arr, int low, int high);

//caracteres
int particionChar(char *arr, int low, int high);
void quickSortChar(char *arr, int low, int high);

//estudaintes
int particionEst(Estudiante *arr, int low, int high);
void quickSortEst(Estudiante *arr, int low, int high);

#endif