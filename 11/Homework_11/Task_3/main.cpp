#include <iostream>
using namespace std;

//3.Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b.
//Пользователь вводит a и b.Проиллюстрируйте работу функции примером.

int sumNumber(int a, int b);

int main() {

	int a, b;

	cout << "Enter number a, pls: ";
	cin >> a;

	cout << "Enter number b, pls: ";
	cin >> b;

	cout << "Sum all number between(include a and b) " << a << " and " << b << " = " << sumNumber(a, b) << endl;

	return 0;
}

//глобальна змінна
int rezalt = 0;

int sumNumber(int a, int b)
{
	rezalt += a;

	if (a != b)
	{
		a++;
		sumNumber(a, b);
	}

	return rezalt;
}