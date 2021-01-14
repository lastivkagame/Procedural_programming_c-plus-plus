#include <iostream>
#define ENTER cout << endl;
using namespace std;

//2. Написать перегруженные функции (int, double, char) для выполнения следующих задач:
	//  -Инициализация квадратной матрицы;
	//  -Вывод матрицы на экран;
	//  -Определение максимального и минимального элемента на главной диагонали матрицы;
	//  -Сортировка элементов по возрастанию отдельно для каждой строки матрицы.

// Функції заповнення масиву:
//1. Функція для масиву з елементами типу int.
void fillArr(int n, int m, int mas[][3]);

//2. Фунція для масиву з елементами типу double.
void fillArr(int n, int m, double mas[][3]);

//2. Фунція для масиву з елементами типу char.
void fillArr(int n, int m, char mas[][3]);


// Функції виводу масиву:
//1.Функція для масиву з елементами типу int.
void displayArr(int n, int m, int mas[][3]);

//2. Фунція для масиву з елементами типу double.
void displayArr(int n, int m, double mas[][3]);

//3. Фунція для масиву з елементами типу char.
void displayArr(int n, int m, char mas[][3]);


// Определение максимального и минимального элемента на главной диагонали матрицы
// 1.Функція для масиву з елементами типу int.
void minArr(int n, int m, int mas[][3]);
void maxArr(int n, int m, int mas[][3]);

//2. Фунція для масиву з елементами типу double.
void minArr(int n, int m, double mas[][3]);
void maxArr(int n, int m, double mas[][3]);

//3. Фунція для масиву з елементами типу char.
void minArr(int n, int m, char mas[][3]);
void maxArr(int n, int m, char mas[][3]);


// Сортировка элементов по возрастанию отдельно для каждой строки матрицы.
// 1.Функція для масиву з елементами типу int.
void sortArr(int n, int m, int mas[][3]);

//2. Фунція для масиву з елементами типу double.
void sortArr(int n, int m, double mas[][3]);

//3. Фунція для масиву з елементами типу char.
void sortArr(int n, int m, char mas[][3]);

int main()
{
	const int n = 3, m = 3;  // краще змінними(тут простіше міняти)
	int userArrInt[n][m];
	char userArrChar[n][m];
	double userArrDouble[n][m];

	//виклик функцій для заповнення масивів типу int, double, char
	cout << "Array 1(integerts): \n";
	fillArr(n, m, userArrInt);

	cout << "Array 2(double numbers): \n";
	fillArr(n, m, userArrDouble);

	cout << "Array 3(symbols): \n";
	fillArr(n, m, userArrChar);

	ENTER;  // те що в 2 рядку

	//виклик функцій для виводу масивів на екран
	cout << "Array 1(integerts): \n";
	displayArr(n, m, userArrInt);

	cout << "Array 2(double numbers): \n";
	displayArr(n, m, userArrDouble);

	cout << "Array 3(symbols): \n";
	displayArr(n, m, userArrChar);

	ENTER;  // те що в 2 рядку

	//визначення мінімального та максимального елемента на головній діагоналі матриці;
	cout << "Array 1(integerts): \n";
	minArr(n, m, userArrInt);
	maxArr(n, m, userArrInt);

	ENTER;  // те що в 2 рядку

	cout << "Array 2(double numbers): \n";
	minArr(n, m, userArrDouble);
	maxArr(n, m, userArrDouble);

	ENTER;  // те що в 2 рядку

	cout << "Array 3(symbols): \n";
	minArr(n, m, userArrChar);
	maxArr(n, m, userArrChar);

	ENTER;  // те що в 2 рядку

	//сортування масивів
	cout << "Array 1 after sort(integerts): \n";
	sortArr(n, m, userArrInt);
	displayArr(n, m, userArrInt);

	cout << "Array 2 after sort(double numbers): \n";
	sortArr(n, m, userArrDouble);
	displayArr(n, m, userArrDouble);

	cout << "Array 3 after sort(symbols): \n";
	sortArr(n, m, userArrChar);
	displayArr(n, m, userArrChar);

	return 0;
}

// Функція(заповнення) для масиву з елементами типу int.
void fillArr(int n, int m, int mas[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << " Enter the element of the array [" << i << "] [" << j << "] - ";
			cin >> mas[i][j];
		}
	}
}

// Фунція(заповнення) для масиву з елементами типу double.
void fillArr(int n, int m, double mas[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << " Enter the element of the array [" << i << "] [" << j << "] - ";
			cin >> mas[i][j];
		}
	}
}

// Функція(заповнення) для масиву з елеметрами типу char.
void fillArr(int n, int m, char mas[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << " Enter the element of the array [" << i << "] [" << j << "] - ";
			cin >> mas[i][j];
		}
	}
}


// Функція(виводу на екран) для масиву з елеметрами типу int.
void displayArr(int n, int m, int mas[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j];
			cout << ", ";
		}
		ENTER;  // те що в 2 рядку
	}
}

// Функція(виводу на екран) для масиву з елеметрами типу double.
void displayArr(int n, int m, double mas[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j];
			cout << ", ";
		}
		ENTER;  // те що в 2 рядку
	}
}

// Функція(виводу на екран) для масиву з елеметрами типу char.
void displayArr(int n, int m, char mas[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j];
			cout << ", ";
		}
		ENTER;  // те що в 2 рядку
	}
}

// Функція(знаходження найменшого значення на діагоналі масиву) для масиву з елеметрами типу int.
void minArr(int n, int m, int mas[][3])
{
	int min = mas[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)    // бо на діагоналі
			{
				if (mas[i][j] < min)
				{
					min = mas[i][j];
				}
			}
		}
	}
	cout << "Min(on the diagonal): " << min << "\n";
}

// Функція(знаходження найбільшого значення на діагоналі масиву) для масиву з елеметрами типу int.
void maxArr(int n, int m, int mas[][3])
{
	int max = mas[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)    // бо на діагоналі
			{
				if (mas[i][j] > max)
				{
					max = mas[i][j];
				}
			}
		}
	}
	cout << "Max(on the diagonal): " << max << "\n";
}

// Функція(знаходження найменшого значення на діагоналі масиву) для масиву з елеметрами типу double.
void minArr(int n, int m, double mas[][3])
{
	double min = mas[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)    // бо на діагоналі
			{
				if (mas[i][j] < min)
				{
					min = mas[i][j];
				}
			}
		}
	}
	cout << "Min(on the diagonal): " << min << "\n";
}

// Функція(знаходження найбільшого значення на діагоналі масиву) для масиву з елеметрами типу double.
void maxArr(int n, int m, double mas[][3])
{
	double max = mas[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)    // бо на діагоналі
			{
				if (mas[i][j] > max)
				{
					max = mas[i][j];
				}
			}
		}
	}
	cout << "Max(on the diagonal): " << max << "\n";
}

// Функція(знаходження найменшого значення на діагоналі масиву) для масиву з елеметрами типу char.
void minArr(int n, int m, char mas[][3])
{
	char min = mas[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)    // бо на діагоналі
			{
				if (mas[i][j] < min)
				{
					min = mas[i][j];
				}
			}
		}
	}
	cout << "Min(on the diagonal): " << min << " ( " << char(min) << " ) \n";
}

// Функція(знаходження найбільшого значення на діагоналі масиву) для масиву з елеметрами типу char.
void maxArr(int n, int m, char mas[][3])
{
	char max = mas[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)    // бо на діагоналі
			{
				if (mas[i][j] > max)
				{
					max = mas[i][j];
				}
			}
		}
	}
	cout << "Max(on the diagonal): " << max << " ( " << char(max) << " ) \n";
}


// Функція(сортування рядків) для масиву з елеметрами типу int.
void sortArr(int n, int m, int mas[][3])
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < m - 1; i++)
		{
			for (int j = i + 1; j < m; j++)
			{
				if (mas[k][j] < mas[k][i])
				{
					int temp = mas[k][i];
					mas[k][i] = mas[k][j];
					mas[k][j] = temp;
				}
			}
		}
	}
}

// Функція(сортування рядків) для масиву з елеметрами типу double.
void sortArr(int n, int m, double mas[][3])
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < m - 1; i++)
		{
			for (int j = i + 1; j < m; j++)
			{
				if (mas[k][j] < mas[k][i])
				{
					double temp = mas[k][i];
					mas[k][i] = mas[k][j];
					mas[k][j] = temp;
				}
			}
		}
	}
}

// Функція(сортування рядків) для масиву з елеметрами типу char.
void sortArr(int n, int m, char mas[][3])
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < m - 1; i++)
		{
			for (int j = i + 1; j < m; j++)
			{
				if (mas[k][j] < mas[k][i])
				{
					char temp = mas[k][i];
					mas[k][i] = mas[k][j];
					mas[k][j] = temp;
				}
			}
		}
	}
}