#include <iostream>
using namespace std;

int main()
{
	/* 16.Створіть перечислення Direction з константами HORIZONTAL, VERTICAL. Створіть змінну цього перечислення.
	Користувачу виводиться повідомлення «Виберіть лінію. H – горизонтальна, V – вертикальна». Користувач в символьну
	змінну вводить символ. Завдяки switch проаналізуйте його і якщо це один із правильних символів – задайте змінній
	перечислення відповідну константу. Інакше виведіть повідомлення про помилку і задайте значення яке хочете. Після
	цього спитайте в користувача скільки символів він хоче вивести. Користувач вводить цю кількість до тих пір поки
	не введе додатнє число більше за 0. Виконайте це в циклі do while. Після цього спитайте який символ він хоче
	вивести. Він його вводить. Після цього в switch проаналізуйте значення змінної перечислення, і якщо лінія має бути
	горизонтальною – виведіть рядок із певної кількості його символу. Якщо вертикальна – то стовпчик.
	*/

	enum Direction { HORIZONTAL = 'H', VERTICAL = 'V' };

	Direction Line;
	char choose, symbol;
	int number;

	cout << "Select a line. H - horizontal line, V - vertical line. Your choose: ";
	cin >> choose;

	//1)вибір як буде виводитись
	switch (choose)
	{
	case 'H':
		Line = HORIZONTAL;
		break;
	case 'h':
		Line = HORIZONTAL;
		break;
	case'V':
		Line = VERTICAL;
		break;
	case'v':
		Line = VERTICAL;
		break;
	default:
		cout << "Incorrect direction.(Vertical line has been automatically selected)\n";
		Line = VERTICAL;
		break;
	}

	//2)кількість символа на екрані
	do
	{
		cout << "How many characters you want to display\? You want : ";
		cin >> number;
	} while (number < 0);

	cout << "How symbol to display(enter pls): ";
	cin >> symbol;

	//3)вивід
	switch (Line)
	{
	case HORIZONTAL:
		while (number > 0)
		{
			cout << symbol << "  ";
			number--;
		}
		break;
	case VERTICAL:
		while (number > 0)
		{
			cout << symbol << "  \n";
			number--;
		}
		break;
	default:
		break;
	}
}