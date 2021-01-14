#include "functions.h"
Animal a1 = { "Murzik",5,"Cat" };
int main() {

	/*printStruct(a1);
	Animal *pA1 = &a1;
	//printStruct(*pA1);

	cout << "------Print Animal-------\n";
	cout << pA1->name << endl;

	//рА1 - вказівник, доступ до полів структури через вказівник здійснюється за допомогою оператора ->
	*/
	
	int size;
	cout << "Enter size: ";
	cin >> size;
	 
	cout << "____________Array zoo___________\n";
	Animal*zoo = new Animal[size];
	for (int i = 0; i < size; i++)
	{
		zoo[i] = fill();
		
	}

	cout << "___________________\n";

	for (int i = 0; i < size; i++)
	{
		
		printStruct(zoo[i]);
	}

	cout << "------------------------------------------\n";
	//виводимо через арифметику вказівників
	for (int i = 0; i < size; i++)
	{

		pPrintStruct(zoo + i);
	}
	
	/*
	cout << "----------operator size of()-----------\n";

	cout << "int: " << sizeof(int) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "double*: " << sizeof(double*) << endl;
	float number = 4.6;
	cout << "float number: " << sizeof(number) << endl;
	cout << "int*: " << sizeof(int*) << endl;
	cout << "char: " << sizeof('6') << endl;

	cout << "____________ " << endl;
	cout << "sizeof(Animal): " << sizeof(Animal) << endl;
	cout << "sizeof(a1): " << sizeof(a1) << endl;
	cout << "sizeof(size_t): " << sizeof(size_t) << endl;
*/


	

	system("pause");
	return 0;
}
