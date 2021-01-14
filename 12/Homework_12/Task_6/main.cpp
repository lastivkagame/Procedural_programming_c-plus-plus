/* Задание 6:
Используя указатели и оператор разыменования, обменять местами значения двух переменных.*/

#include <iostream>
using namespace std;

int main() {

	int a, b, temp;

	cout << "Enter number a, pls: ";
	cin >> a;

	cout << "Enter number b, pls: ";
	cin >> b;

	int* pa = &a, * pb = &b;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

	cout << " a = " << *pa << endl;
	cout << " b = " << *pb << endl;

	return 0;
}