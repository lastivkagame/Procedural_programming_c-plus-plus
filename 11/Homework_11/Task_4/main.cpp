#include <iostream>
using namespace std;

//4. Написать рекурсивную функцию находжения факториала числа (факториал 5!=5*4*3*2*1)
//Проиллюстрируйте работу функции примером.
int factorialNumber(int number);

int main() {
	//test
	int number;

	cout << "Enter number, pls:  ";
	cin >> number;
	cout << "Number Factorial: " << number << " != " << factorialNumber(number) << endl;

	return 0;
}

//глобальна змінна
int rezalt = 1;

int factorialNumber(int number)
{
	rezalt *= number;
	number--;

	if (number > 1)
	{
		factorialNumber(number);
	}

	return rezalt;
}