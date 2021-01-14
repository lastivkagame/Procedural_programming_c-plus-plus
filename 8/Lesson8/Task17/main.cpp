#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	/*17.Створити великий двовимірний масив, наприклад 40 на 40. Ви ще не вмієте створювати масиви користувацького
	розміру, але можна зробити ілюзію цього. Спитайте в користувача який розмір масиву він хоче. Він вводить розміри
	(звісно, що не більше 40 на 40). Виведіть на екран масив з рандомними числами такого розміру. Тобто суть задачі
	в створені ілюзії для користувача, що ви дійсно створили масив його розміру.*/

	srand(time(nullptr));

	const int ROWS = 40, COLUMN = 40;
	int arr[COLUMN][ROWS];
	int number, row, column;

	cout << "Your array!(with your number of columns and rows!)\n";

	cout << "Enter number of columns: ";
	cin >> column;

	cout << "Enter number of rows: ";
	cin >> row;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr[i][j] = rand();
		}
	}

	cout << "\tArray\n";

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << arr[i][j] << "   ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}