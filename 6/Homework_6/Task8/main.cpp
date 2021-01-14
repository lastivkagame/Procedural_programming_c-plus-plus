#include <iostream>
using namespace std;

int main()
{
	//8.Зробіть попередню задачу так, щоб розміри вводив користувач. Врахуйте помилку з некоректними розмірами.

	cout << " Your rectangle\n";

	int length, width;

	do
	{
		cout << "Enter the length of the rectangle : ";
		cin >> length;

		cout << "Enter the width of the rectangle : ";
		cin >> width;
		cout << endl;

		if (length <= 0 || width <= 0)
		{
			cout << "Inccorect direction\n\n";
		}

	} while (length <= 0 || width <= 0);

	for (int i = 0; i < width; i++)
	{
		cout << " * ";

		for (int b = 1; b < length; b++)
		{
			cout << " * ";
		}
		cout << endl;
	}
}