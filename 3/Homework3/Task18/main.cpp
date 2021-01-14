#include <iostream>
using namespace std;

int main()
{
	//18. З клавіатури вводиться час (в годинах, хвилинах, секундах). Визначити чи він допустимий 
	// (наприклад 25:62:82 – явно недопустимий). Якщо він коректний – вивести на екран «ваш час: ХХ:ХХ:ХХ».
	// Інакше вивести «Ви ввели некоректний час»

	int hours, minutes, seconds;

	cout << "Please enter what time is now(hour):  ";
	cin >> hours;

	cout << "Please enter what time is now(minutes):  ";
	cin >> minutes;

	cout << "Please enter what time is now(seconds):  ";
	cin >> seconds;

	if ((hours <= 24 && hours >= 0) && (minutes <= 60 && minutes >= 0) && (seconds <= 60 && seconds >= 0))
	{
		if (seconds == 60)
		{
			seconds = 0;
			minutes++;
		}
		if (minutes == 60)
		{
			minutes = 0;
			hours++;
		}
		cout << "You say that now  - " << hours << ":" << minutes << ":" << seconds << endl;
	}
	else
	{
		cout << "You have entered an incorrect time";
	}

}