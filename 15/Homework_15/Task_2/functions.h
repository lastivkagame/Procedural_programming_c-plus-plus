#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

/*Declaration*/

// функції для динамічного масиву
void fillArrDynamic(int userArr[], int size);
void printArrDynamic(int userArr[], int size);
void sortArrDynamic(int userArr[], int size);

int minArrDynamic(int userArr[], int size);
int maxArrDynamic(int userArr[], int size);

int* delElemDynamic(int* user, int& size);
int* addElemDynamic(int* user, int& size);

// функції для динамічної матриці (двовимірний масив)
void fillArrDynamicMatrix(int* userArr[], int row, int col);
void printArrDynamicMatrix(int* userArr[], int row, int col);
void sortArrDynamicMatrix(int* userArr[], int row, int col);

int minArrDynamicMatrix(int* userArr[], int row, int col);
int maxArrDynamicMatrix(int**, int row, int col);