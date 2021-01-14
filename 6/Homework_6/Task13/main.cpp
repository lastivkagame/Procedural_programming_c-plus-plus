#include <iostream>
using namespace std;

int main()
{
	//13.В перший день равлик проповз 15 см. Кожний наступний день він проповзав на 2 см далі.
	// Визначити загальну відстань, яку проповзе равлик через N днів (їх вводить користувач).
	// Наприклад користувач ввів 4 дня. Отже равлик проповз 15 + 17 + 19 + 21 = 72 см.

	int days, distanceOnDay = 15, distanceAll = 0;

	cout << "   What distance does the snail slam?\n";

	cout << "Enter the number of days that the snail creeps: ";
	cin >> days;

	for (int i = 0; i < days; i++)
	{
		distanceAll += distanceOnDay;
		distanceOnDay = distanceOnDay + 2;
	}
	cout << "The snail crossed the distance of " << distanceAll << " cm\n";
}