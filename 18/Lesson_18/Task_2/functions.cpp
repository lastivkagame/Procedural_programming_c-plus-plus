#include"functions.h"

/*Defination functions  - визначення функцій*/

Animal fill()
{

	Animal text;

	cout << "Enter name : ";
	cin >> text.name;

	cout << "Enter vyd : ";
	cin >> text.vyd;

	cout << "Enter age : ";
	cin >> text.age;

	return text;
}

void printStruct(Animal a)
{
	cout << "Print: " << endl;
	cout << "Name: " << a.name << endl;
	cout << "Vyd: " << a.vyd << endl;
	cout << "Age: " << a.age << endl;
}

void pPrintStruct(Animal * a)
{
	cout << "Print: " << endl;
	cout << "Name: " << a->name << endl;
	cout << "Vyd: " << a->vyd << endl;
	cout << "Age: " << a->age << endl;

}