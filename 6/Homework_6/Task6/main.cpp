#include <iostream>
using namespace std;

int main()
{
	//6.Виведіть на екран табличку множення чисел 1-9 на числа 1-9 (завдяки двом циклам for).

	cout << " Multiplication table\n";

	for (int i = 1; i < 10; i++)
	{
		for (int b = 0; b < 10; b++)
		{
			cout << "     " << i << " * " << b << " = " << b * i << endl;
		}
		cout << endl;
	}
}