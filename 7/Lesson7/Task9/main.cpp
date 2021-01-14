#include <iostream>
using namespace std;

int main()
{
	//Створити масив із 26 елементів типу char. Завдяки циклу перший елемент заповнити буквою А, всі інші на 1 букву більше (тобто масив має зберігати весь англійський алфавіт). 
	//Вивести елементи на екран.

	const int SIZE = 26;
	char arr26[SIZE];
	char A = 'A';

	cout << "Array (english): ";

	for (int i = 0; i < 26; i++)
	{
		arr26[i] = A;
		A++;
	}

	for (int j = 0; j < 26; j++)
	{
		cout << arr26[j] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}