#include <iostream>
using namespace std;

int main()
{
	//3.Виведіть на екран табличку множення чисел 1-9 на число 8 через цикл for.

	cout << " Multiplication table on 8\n";

	for (int i = 0; i < 10; i++)
	{
		cout << "   " << i << " * " << 8 << " = " << i * 8 << endl;
	}
}