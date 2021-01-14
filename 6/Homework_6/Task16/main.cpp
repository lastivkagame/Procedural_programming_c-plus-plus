#include <iostream>
using namespace std;

int main()
{
	/*16.Міняємо ролі. Тепер число загадує комп’ютер. І загадує він число 32 (користувач цього не бачить).
	Користувач має вводити числа від 1 до 100. Комп’ютер дає такі ж підказки: «так, моє число», «ні, може
	число більше» і «ні, моє число менше». Комп’ютер обдурити не може. Тому користувач завжди вгадає число
	комп’ютера рано чи пізно. Після вгадування вивести кількість спроб користувача.*/

	int number = 32, userCount = 0, userNumber;

	cout << "  You must guess the number which made the computer.\n";

	do
	{
		cout << "Enter number,pls: ";
		cin >> userNumber;

		if (userNumber == number)
		{
			cout << "Yes that my number! You won!\n";
		}
		else if (userNumber > number)
		{
			cout << "My number <\n";
		}
		else
		{
			cout << "My number >\n";
		}

		userCount++;

	} while (userNumber != 32);

	cout << "You used " << userCount << " attempts\n";
}