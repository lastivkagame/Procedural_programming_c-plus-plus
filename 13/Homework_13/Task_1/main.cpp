/*1. Створіть масив символів, ініціалізуйте його символами HELLO.
Напишіть функцію, яка приймає цей масив, і його розмір. Вона виводить цей масив і викликає іншу функцію,
яку ви напишете. Інша функція також приймає цей масив, але виводить його з кінця.
 Таким чином у main має бути масив і виклик однієї функції. На екрані має бути HELLO OLLEH.
Старайтесь не використовувати індексацію, і обійтися лише інкрементами/дикрементами і розміром масиву.*/

#include <iostream>
using namespace std;

void printArr(char arr[], int size);
void printArrConvers(char arr[]);

int main() {

	char arrHello[] = "HELLO";

	printArr(arrHello, strlen(arrHello));

	return 0;
}

void printArr(char arr[], int size)
{
	char* pArr = arr;

	for (int i = 0; i < size; i++)
	{
		cout << *pArr++;
	}

	printArrConvers(arr);
}

void printArrConvers(char arr[])
{
	char* pArr = &arr[strlen(arr)];

	for (int i = 0; i < strlen(arr) + 1; i++)
	{
		cout << *pArr--;
	}
}