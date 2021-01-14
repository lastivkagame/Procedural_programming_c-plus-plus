/*1.Структура CandyBar включает три члена.
 - Первый из них содержит наименование коробки конфет.
 - Второй - ее вес ( который может иметь дробную часть) , а
 - третий - число калорий (целое значение).
 Напишите программу, объявляющую эту структуру и создающую переменную типа CandyBar по имени snack,
 инициализируя ее члены значениями "Mocha Munch ", 2. 3 и 350, соответственно.
	Инициализация должна быть частью объявления snack. И, наконец, программа
должна отобразить содержимое этой переменной.*/

/*2.Структура CandyBar включает три члена, как описано в предыдущем упражнении.
Напишите программу, которая создает массив из трех структур CandyBar, инициализирует
их значениями на ваше усмотрение и затем отображает содержимое каждой структуры.*/

#include <iostream>
using namespace std;

struct CandyBar
{
	char name[30];
	double masa;
	int calories;
};

void printSnack(CandyBar snack);         //для друку однієї структури якщо знадобиться
void printSnacks(CandyBar snack[], int size);  // для друку масиву структур 

int main() {

	CandyBar snack = { "Mocha Munch " , 2.3, 350 };
	CandyBar snack2 = { "Chex Mix" , 2.5, 400 };
	CandyBar snack3 = { "Terra " , 2.1, 300 };

	//1
	printSnack(snack);

	//2
	cout << "-------------------\n";
	const int SIZE = 3;
	CandyBar arr[SIZE] = { snack, snack2, snack3 };

	printSnacks(arr, SIZE);

	return 0;
}

void printSnack(CandyBar snack)
{
	cout << "   -Snack-  \n";
	cout << "Name: " << snack.name << endl;
	cout << "Masa: " << snack.masa << endl;
	cout << "Calories: " << snack.calories << endl;
}

void printSnacks(CandyBar snack[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1;
		printSnack(snack[i]);
		cout << endl;
	}
}