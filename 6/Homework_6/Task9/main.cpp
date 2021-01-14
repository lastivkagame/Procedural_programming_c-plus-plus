#include <iostream>
using namespace std;

int main()
{
	//9.Зробіть попередню задачу так, щоб прямокутник був пустий всередині (малюються лише границі).

	int x;     //висота
	int y;    //ширина

	//коректний ввід
	do {
		cout << "Enter width : ";
		cin >> y;

		cout << "Enter height : ";
		cin >> x;

		cout << endl;

		if (y <= 0 || x <= 0)
		{
			cout << "Incorrect direction\n";
		}
	} while ((y <= 0) || (x <= 0));

	//ширина (верхній ряд зірочок)
	for (int i = 0; i < y; i++)
	{
		cout << "*";
	}

	cout << endl;

	//висота
	for (int i = 0; i < x - 2; i++)
	{
		cout << "*";

		for (int j = 0; j < y - 2; j++)
		{
			cout << ' ';
		}

		cout << "*\n";
	}

	// ширина (нижня лінія)
	if (x > 1)
	{
		for (int i = 0; i < y; i++)
		{
			cout << "*";
		}
	}
	cout << endl;
	cout << endl;
}