#include <iostream>
using namespace std;

int main()
{
	/*15.Користувач в голові загадує число від 1 до 100. Комп’ютер має відгадати це число.
	Спочатку він питає чи це число 50. Користувач має вибрати 3 варіанта відповіді: «так»,
	«ні, моє число менше», «ні, моє число більше». Два останні варіанти є підказкою комп’ютеру,
	яке число виводити далі. Якщо користувач каже що його число більше, то комп’ютер уже виводить 75.
	Якщо потім менше, то 62. І так далі. Врахувати обдурювання користувача. Наприклад щоб
	користувач не міг вічно казати що його число більше. Якщо комп’ютер дійшов до 100 чи 0
	і це не число користувача, то користувач його дурить. Також обдурюванням є ситуація,
	коли діапазон пошуку комп’ютера находиться між числами (наприклад) 62 і 63, він виводить
	ці два числа, а користувач каже що це не його числа. Це також обдурювання. Якщо комп’ютер вгадав
	число користувача (при чесній грі він завжди вгадає рано чи пізно), вивести кількість його спроб.
	*/

	cout << "  Welcome to the game \"The program guesses your number\"!\n";

	int number, count;
	char answer;

	cout << "       Define any number from 1 to 100\n" << endl;

	do
	{
		int  left = 0, right = 100;

		for (int i = 1; i <= 7; i++)
		{
			number = (left + right) / 2;

			cout << "Yor number " << number << "?( a - Yes! ;   b - No, my number > ;   c -  No, my number <) \n";
			cout << "Answer : ";
			cin >> answer;

			if (answer == 'c')
			{
				right = number;
			}
			else if (answer == 'b')
			{
				left = number;
			}
			else if (answer == 'a')
			{
				cout << "I won! I used  " << i << " attempts!\n";
				return 0;
			}
			else
			{
				cout << "Incorrect direction: a,b and c.\n";
				i--;
			}
		}
		cout << "You cheat me!(becouse it's impossible!) So we START from the beginning!\n\n";
	} while (answer != 'a');
}