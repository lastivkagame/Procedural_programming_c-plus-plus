#pragma once
#include <iostream>
using namespace std;

/*Declaration*/

struct Animal {
	char name[30];
	int age;
	char vyd[30];
};

Animal fill();



void printStruct(Animal a);
void pPrintStruct(Animal* a);

