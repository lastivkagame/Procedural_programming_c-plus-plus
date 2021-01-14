/* Задание 7:
Написать примитивный калькулятор, пользуясь только указателями.*/

#include <iostream>
using namespace std;

void sum(int* x, int* y, int* tmp);
void minuss(int* x, int* y, int* tmp);
void multiplication(int* x, int* y, int* tmp);
void del(int* x, int* y, int* tmp);

int main()
{
	int a, b, rezalt;
	char operation;
	do {
		cout << " It's primitive calculator\n";

		cout << "Enter number 1, pls: ";
		cin >> a;

		cout << "Operation: you can use only: + - * / \n";
		cout << "Enter operation, pls:";
		cin >> operation;

		cout << "Enter number 2, pls: ";
		cin >> b;

		cout << "rezalt(=): ";

		switch (operation) {
		case '+':
			sum(&a, &b, &rezalt);
			cout << rezalt << "\n";
			break;
		case '-':
			minuss(&a, &b, &rezalt);
			cout << rezalt << "\n";
			break;
		case '*':
			multiplication(&a, &b, &rezalt);
			cout << rezalt << "\n";
			break;
		case '/':
			del(&a, &b, &rezalt);
			cout << rezalt << "\n";
			break;
		default:
			cout << "Error!\n";
		}

		cout << "if you want to continue enter 1, else enter something else\n";
		cin >> a;
	} while (a == 1);

	return 0;
}

void sum(int* x, int* y, int* tmp)
{
	*tmp = *x + *y;
}

void minuss(int* x, int* y, int* tmp)
{
	*tmp = *x - *y;
}

void multiplication(int* x, int* y, int* tmp)
{
	*tmp = *x * *y;
}

void del(int* x, int* y, int* tmp)
{
	*tmp = *x / *y;
}