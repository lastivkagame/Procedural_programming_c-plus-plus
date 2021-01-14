#include <iostream>
using namespace std;

int main()
{
	//12.Протягом тижня вимірюється температура повітря (користувач в одну змінну вводить 7 разів її). 
	//Виведіть на екран середню температуру за тиждень та кількість днів, коли температура була від’ємною.
	// Для введення температур використовуйте цикл for.

	double  temperature, sum = 0;
	int negativeTemp = 0;

	for (int i = 1; i <= 7; i++)
	{
		cout << "Enter temperature of the " << i << " day,pls: ";
		cin >> temperature;

		sum += temperature;

		if (temperature < 0)
		{
			negativeTemp++;
		}
	}
	cout << "Average temperature during these seven days: " << sum / 7 << endl;
	cout << "Number of days when the air temperature was negative: " << negativeTemp << endl;
}